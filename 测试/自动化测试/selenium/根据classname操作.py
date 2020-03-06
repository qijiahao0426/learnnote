from selenium import webdriver

wd=webdriver.Chrome(r'/Users/qijiahao/webdrivers/chromedriver')

wd.get('http://f.python3.vip/webauto/sample1.html')

elements=wd.find_elements_by_class_name('animal')

for element in elements:
    print(element.text)