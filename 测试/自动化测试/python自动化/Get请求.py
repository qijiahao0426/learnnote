# 1.导包
import requests
# 2.调用get
url="http://www.baidu.com"
# params={"id":1001}
# params={"id":"1001,1002"}
params={"id": 1001,"kw":"北京"}
r=requests.get(url,params=params)

# 3.获取url地址
print(r.url)

# 4.获取响应状态码
r.status_code

# 5.获取响应内容
r.text
