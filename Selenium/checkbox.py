from selenium import webdriver
import time
import math

def calc(x):
  return str(math.log(abs(12*math.sin(int(x)))))

link = "http://suninjuly.github.io/math.html"


try:
    browser = webdriver.Chrome()
    browser.get(link)
    x_element = browser.find_element_by_id("input_value")
    x = x_element.text
    y = calc(x)
    input1 = browser.find_element_by_id("answer")
    input1.send_keys(y)
    checkbox1 = browser.find_element_by_id("robotCheckbox")
    checkbox1.click()
    radio1 = browser.find_element_by_id("robotsRule")
    radio1.click()
    link = browser.find_element_by_xpath("//button[text()='Submit']")
    link.click()
finally:
    time.sleep(15)
    browser.quit()

