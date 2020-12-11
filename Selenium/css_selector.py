from selenium import webdriver
import time

link = "http://suninjuly.github.io/registration1.html"

try:
    browser = webdriver.Chrome()
    browser.get(link)
    input1 = browser.find_element_by_css_selector(".first_block .first_class input")
    input1.send_keys("Oguretcz")
    input2 = browser.find_element_by_css_selector(".first_block .second_class input")
    input2.send_keys("Kartoshkin")
    input3 = browser.find_element_by_css_selector(".first_block .third_class input")
    input3.send_keys("tea@gmail.com")
    link = browser.find_element_by_xpath("//button[text()='Submit']")
    link.click()
finally:
    time.sleep(15)
    browser.quit()

# не забываем оставить пустую строку в конце файла

