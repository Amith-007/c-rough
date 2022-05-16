import pymongo
url="mongodb://localhost:27017/"
c=pymongo.MongoClient(url)
db=c["cet"]
coll=db["student"]
coll.insert_many([{"_id":1,"name":"Anjali","place":"Kollam","phone":8582639562,"vaccination_status":"Both Vaccinated","RTPCR":"negative","lab_mark":{"internal":30,"external":45},"department":"MCA"},

{"_id":2,"name":"Anuradha","place":"Varkala","phone":9992639562,"vaccination_status":"Both Vaccinated","RTPCR":"negative","lab_mark":{"internal":40,"external":48},"department":"Civil"},

{"_id":3,"name":"Bismiya","place":"Kollam","phone":9446639562,"vaccination_status":"not Vaccinated","RTPCR":"positive","lab_mark":{"internal":50,"external":39},"department":"MCA"},

{"_id":4,"name":"Vimal","place":"Ernakulam","phone":8582639568,"vaccination_status":"First dose only","RTPCR":"positive","lab_mark":{"internal":40,"external":42},"department":"Civil"},

{"_id":5,"name":"Vivek","place":"Kollam","phone":8582639777,"vaccination_status":"Both Vaccinated","RTPCR":"negative","lab_mark":{"internal":50,"external":50},"department":"MCA"}])

