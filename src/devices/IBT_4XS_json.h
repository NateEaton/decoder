/* const char* _IBT_4XS_json = "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4X(S/C)\",\"cidc\":false,\"condition\":[\"name\",\"index\",0,\"iBBQ\",\"&\",\"manufacturerdata\",\"=\",36,\"index\",0,\"00000000\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"tempc3\":{\"condition\":[\"manufacturerdata\",30,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false],\"post_proc\":[\"/\",10]},\"tempc4\":{\"condition\":[\"manufacturerdata\",34,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,4,true,false],\"post_proc\":[\"/\",10]}}}"; */
const char* _IBT_4XS_json = "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4X(S/C)\",\"cidc\":false,\"condition\":[\"name\",\"index\",0,\"iBBQ\",\"&\",\"manufacturerdata\",\"=\",36,\"index\",0,\"00000000\"],\"properties\":{\"tempc1\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true,false],\"post_proc\":[\"/\",10]},\"state1\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",22,2,\"on\",\"off\"]},\"tempc2\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"state2\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",26,2,\"on\",\"off\"]},\"tempc3\":{\"condition\":[\"manufacturerdata\",30,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false],\"post_proc\":[\"/\",10]},\"state3\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",30,2,\"on\",\"off\"]},\"tempc4\":{\"condition\":[\"manufacturerdata\",34,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,4,true,false],\"post_proc\":[\"/\",10]},\"state4\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",34,2,\"on\",\"off\"]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"iBBQ",
   "model_id":"IBT-4X(S/C)",
   "cidc":false,
   "condition":["name", "index", 0, "iBBQ","&","manufacturerdata", "=" ,36 ,"index", 0, "00000000"],
   "properties":{
      "tempc1":{
         "condition":["manufacturerdata", 22, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true, false],
         "post_proc":["/", 10]
      },
      "state1":{
         "decoder":["bit_static_value", "manufacturerdata", 22, 2, "on", "off"]
      },
      "tempc2":{
         "condition":["manufacturerdata", 26, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "state2":{
         "decoder":["bit_static_value", "manufacturerdata", 26, 2, "on", "off"]
      },
      "tempc3":{
         "condition":["manufacturerdata", 30, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, false],
         "post_proc":["/", 10]
      },
      "state3":{
         "decoder":["bit_static_value", "manufacturerdata", 30, 2, "on", "off"]
      },
      "tempc4":{
         "condition":["manufacturerdata", 34, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 4, true, false],
         "post_proc":["/", 10]
      },
      "state4":{
         "decoder":["bit_static_value", "manufacturerdata", 34, 2, "on", "off"]
      }
   }
})"""";*/

/* const char* _IBT_4XS_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc2\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc3\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc4\":{\"unit\":\"°C\",\"name\":\"temperature\"}}}"; */
const char* _IBT_4XS_json_props = "{\"properties\":{\"tempc1\":{\"unit\":\"\u00b0C\",\"name\":\"temperature\",\"expire_after\":3600},\"state1\":{\"unit\":\"string\",\"name\":\"state\"},\"tempc2\":{\"unit\":\"\u00b0C\",\"name\":\"temperature\",\"expire_after\":3600},\"state2\":{\"unit\":\"string\",\"name\":\"state\"},\"tempc3\":{\"unit\":\"\u00b0C\",\"name\":\"temperature\",\"expire_after\":3600},\"state3\":{\"unit\":\"string\",\"name\":\"state\"},\"tempc4\":{\"unit\":\"\u00b0C\",\"name\":\"temperature\",\"expire_after\":3600},\"state4\":{\"unit\":\"string\",\"name\":\"state\"}}}";
/*R""""(
{
   "properties":{
      "tempc1":{
         "unit":"°C",
         "name":"temperature",
         "expire_after":3600
      },
      "state1":{
         "unit":"string",
         "name":"state"
      },
      "tempc2":{
         "unit":"°C",
         "name":"temperature",
         "expire_after":3600
      },
      "state2":{
         "unit":"string",
         "name":"state"
      },
      "tempc3":{
         "unit":"°C",
         "name":"temperature",
         "expire_after":3600
      },
      "state3":{
         "unit":"string",
         "name":"state"
      },
      "tempc4":{
         "unit":"°C",
         "name":"temperature",
         "expire_after":3600
      },
      "state4":{
         "unit":"string",
         "name":"state"
      }
   }
})"""";*/

