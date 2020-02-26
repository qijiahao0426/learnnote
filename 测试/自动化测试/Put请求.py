# 1.导包
import requests
# 2. 调用post
url="http://XXXXX/id"
headers={"Content-Type":"application/json"}
data={
    "data":[{
                "dep_id":"id",
                "dep_name":"Test学院"
            }]
    }
r=requests.put(url,json=data,headers=headers)
# 3.获取响应对象
print(r.json)
# 4.获取响应状态码
print(r.status_code)