from selenium import webdriver
wd = webdriver.Chrome(r'/Users/qijiahao/webdrivers/chromedriver')
wd.get('http://f.python3.vip/webauto/sample1.html')
element=wd.find_element_by_id('container')
spans=element.find_elements_by_tag_name('span')
for span in spans:
    print(span.text)
