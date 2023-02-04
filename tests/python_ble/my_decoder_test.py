from TheengsDecoder import decodeBLE as dble
from TheengsDecoder import getProperties
from TheengsDecoder import getAttribute
import json

from pkg_resources import get_distribution

package_name = "TheengsDecoder"
version = get_distribution(package_name).version
print("Package version:", version, "\n")

# x = {"servicedata":"712098004a63b6658d7cc40d071003f32600"} 
w = {"manufacturerdata": "850002003c610041014442160100433c01"}
print("Decoder sent:", w, "\n");
z = dble(json.dumps(w))

print("Decoder result (something expected?):\n")
print(z, "\n")

if z is not None:
    p = json.loads(z)
    print(getProperties(p['model_id']), "\n")
    brand = getAttribute(p['model_id'], 'brand')
    model = getAttribute(p['model_id'], 'model')
    print("brand:", brand, ", model:", model)

x = {"manufacturerdata": "330117630e10015c00a301ac00240100", "name": "C2075592"}
print("Decoder sent:", x, "\n");
z = dble(json.dumps(x))

print("Decoder result (something expected):\n")
print(z, "\n")

if z is not None:
    p = json.loads(z)
    print(getProperties(p['model_id']), "\n")
    brand = getAttribute(p['model_id'], 'brand')
    model = getAttribute(p['model_id'], 'model')
    print("brand:", brand, ", model:", model)

y = {}
print("Decoder sent:", y, "\n");
z = dble(json.dumps(y))
print("decoder result (None expected): ", z)
print("Done")
