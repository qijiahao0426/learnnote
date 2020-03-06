# 1.导包
import requests
# 2. 调用post
url="http://XXXX/id/"
r=requests.delete(url)
# 3.获取响应状态码
print(r.status_code) #204