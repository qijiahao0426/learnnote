import requests
from pip._vendor.html5lib.treewalkers import pprint

res=requests.get('url')

if res.status_code ==200:
    print('检查点通过')
else:
    print('不通过')
    
print(res.json())
pprint(res.json())

list1=res.json()['retlists']

res=requests.post('url', 
              data={
                  'action':'add_course',
                  'data':{
                      "name":"猴哥",
                      "desc":"初中化学课程",
                      "display_idx":"4"
                      }
                  }, 'json')

resObj=res.json()
pprint(resObj,width=30);

res=requests.get('url')
list2=res.json()['retlists']

if resObj['retcode']==0:
    print('测试点')
else:
    print('测试点')
    
newcourse=None;

for one in list2:
    if one not in list1:
        newcourse=one
        break
    
assert newcourse!=None
