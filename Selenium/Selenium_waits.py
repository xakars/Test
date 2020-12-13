from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium import webdriver
import math
import time

def calc(x):
    return str(math.log(abs(12*math.sin(int(x)))))
try:
    browser = webdriver.Chrome()

    browser.get("http://suninjuly.github.io/explicit_wait2.html")

# говорим Selenium проверять в течение 5 секунд, пока кнопка не станет кликабельной

    price = WebDriverWait(browser, 12).until(EC.text_to_be_present_in_element((By.ID, "price"), "$100"))

    button = browser.find_element_by_id("book")
    button.click()

    button2 = browser.find_element_by_id("solve")
    browser.execute_script("return arguments[0].scrollIntoView(true);", button2)

    x_element = browser.find_element_by_id("input_value")
    x = x_element.text
    input1 = browser.find_element_by_id("answer")
    input1.send_keys(calc(x))

    button2.click()

    alert = browser.switch_to.alert
    alert_text = alert.text
    addToClipBoard = alert_text.split(': ')[-1]
    print(addToClipBoard)
finally:
    time.sleep(7)
    browser.quit()





