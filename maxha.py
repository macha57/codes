class myClass:
    def __init__(self, price , discountAmt):
        self.price = price
        self.discountAmt = discountAmt
    
    def get_price(self):
        return self.price
    
    def get_discountAmt(self):
        return self.discountAmt
    
    def cov_val0011_percent(self):
        convertIntoPercent = self.price - self.discountAmt
        cconvertTo100 = self.discountAmt/convertIntoPercent*100
        return cconvertTo100
    
lolman = myClass(20000,2000)

lolman.cov_val0011_percent()

print(lolman.cov_val0011_percent())



    
