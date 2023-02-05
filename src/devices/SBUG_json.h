

const char* _SBUG_json = "{\"brand\":\"BlueRadios\",\"model\":\"SensorBug\",\"model_id\":\"BR-BUTTON-S3A\",\"condition\":[\"manufacturerdata\",\"index\",0,\"8500\"],\"properties\":{\"batt\":{\"condition\":[\"manufacturerdata\",8,\"3c\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,true,false]},\"motion\":{\"condition\":[\"manufacturerdata\",14,\"41\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,4,true,false]},\"light\":{\"condition\":[\"manufacturerdata\",20,\"42\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false]},\"tempc\":{\"condition\":[\"manufacturerdata\",28,\"43\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,true,true],\"post_proc\":[\"*\",0.0625]}}}";
/*service_uuids=['0000180a-0000-1000-8000-00805f9b34fb'], rssi=-81)
data sent to decoder:  {"manufacturerdata": "850002003c5d0041014442160e0043a801"}*/
/*R""""(
{
   "brand":"BlueRadios",
   "model":"SensorBug",
   "model_id":"BR-BUTTON-S3A",
   "condition":["manufacturerdata", "index", 0, "8500"],
   "properties":{
      "batt":{
         "condition":["manufacturerdata", 8, "3c"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, true, false]
      },
      "motion":{
         "condition":["manufacturerdata", 14, "41"],
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 4, true, false]
      },
      "light":{
         "condition":["manufacturerdata", 20, "42"],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true, false]
      },
      "tempc":{
         "condition":["manufacturerdata", 28, "43"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, true, true],
         "post_proc":["*", 0.0625]
      }
   }
})"""";*/

const char* _SBUG_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"motion\":{\"unit\":\"status\",\"name\":\"motion\"},\"light\":{\"unit\":\"int\",\"name\":\"light level\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "motion":{
         "unit":"status",
         "name":"motion"
      },
      "light":{
         "unit":"int",
         "name":"light level"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      }
   }
})"""";*/
