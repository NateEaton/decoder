# Instructions provided to the AI:
# -----
# Write a python program that accepts as a commandline argument  the name of a
# c++ header file. The code should process the file to create a new output file
# with the same name with a numeric suffix appended. The processing should be to
# first find any JSON formatted structures contained in a c++ comment that
# starts with /*R""""( and ends with )"""";*/. With each JSON structure found,
# generate a string created with json.dumps() that has also had all  spaces
# removed and all double-quotes escaped. The resulting string should then be
# used to replace the value of a const char* assignment statement that
# immediately preceded the comment. There will be two pairs of assignment
# statements / JSON in comment within the file. The name of the first const
# char* will be in the form _XXX_json where XXX is an uppercase abbreviation of
# a target device. The name of the second const char* will be in the form
# _XXX_json_props where XXX is the same as in the first assignment statement. 

# The overall goal is to create a commandline tool that will take a c++ header
# file created as a decoder mapping for a BLE device and update the value of the
# assignment statements with any changes made to the JSON structures. The
# purpose is to speed development of new decoders for the TheengsDecoder project
# on github. 
# -----

import json
import re
import sys

def process_file(file_name):
    # Open the input file and read its contents
    with open(file_name, 'r') as input_file:
        input_text = input_file.read()
    
    # Find all JSON structures in comments that match the specified pattern
    json_structures = re.findall(r'\/\*R""""\((.*)\)"""";\*\/', input_text, re.DOTALL)
    
    # Iterate through the JSON structures and process them
    for json_str in json_structures:
        # Use json.loads to parse the JSON structure
        json_data = json.loads(json_str)

        # Use json.dumps to convert the JSON data back to a string
        json_str_new = json.dumps(json_data, separators=(',', ':'))
        json_str_new = json_str_new.replace(" ", "")
        json_str_new = json_str_new.replace("\"", "\\\"")
    
        # Replace the value of the const char* assignment statement that preceded the comment
        input_text = re.sub(r'\/\*R""""\((.*)\)"""";\*\/', f'const char* = "{json_str_new}";', input_text, 1)
    
    # Create a new output file with a numeric suffix appended
    output_file_name = file_name + '_1'
    with open(output_file_name, 'w') as output_file:
        output_file.write(input_text)

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print('Usage: python process_file.py <header_file>')
        sys.exit(1)
    file_name = sys.argv[1]
    process_file(file_name)
