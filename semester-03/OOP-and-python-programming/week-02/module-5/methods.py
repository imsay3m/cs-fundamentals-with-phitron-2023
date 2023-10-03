#


def call():
    print("calling someone")
    return "call done"


class Phone:
    price = 12000
    color = "blue"
    brand = "samsung"
    features = ["camera", "speaker", "hammer"]

    def call(self):
        print("calling one person")

    def sendSMS(self, phone, sms):
        text = f"sending SMS to: {phone} and message: {sms}"
        return text


myPhone = Phone()
print(myPhone.features)

myPhone.call()
result = myPhone.sendSMS(786, "missy, i missed you")
print(result)
#
