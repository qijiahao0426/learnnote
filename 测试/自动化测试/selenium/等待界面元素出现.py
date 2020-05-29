from selenium import webdriver
wd = webdriver.Chrome(r'/Users/qijiahao/webdrivers/chromedriver')
wd.get('https://www.baidu.com')
element = wd.find_element_by_id('kw')
element.send_keys('黑羽魔巫宗\n')
# 等待 2 秒
from time import sleep
sleep(2)
element = wd.find_element_by_id('1')
print (element.text)
