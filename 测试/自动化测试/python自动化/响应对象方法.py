import requests

url="http://www.baidu.com"
r=requests.get(url)

# 默认ISO-8859-1
print(r.encoding)

r.encoding="utf-8"

# print(r.text)

print(r.headers)
print(r.status_code)
print(r.cookies)
print(r.cookies['BDORZ'])

url="http://www.baidu.com/img/bd_logo1.png?where=super"
r=requests.get(url)

with open("./baidu.png","wb") as f:
    f.write(r.content)