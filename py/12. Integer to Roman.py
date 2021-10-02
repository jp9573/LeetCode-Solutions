class Solution:
    def intToRoman(self, n: int) -> str:
        dic={'I': 1,
            'IV': 4,
            'V' : 5,
            'IX': 9,
            'X' : 10,
            'XL': 40,
            'L' : 50,
            'XC': 90,
            'C' : 100,
            'CD': 400,
            'D' : 500,
            'CM': 900, 
            'M' : 1000}
        roman=[]
        for k,v in reversed(dic.items()):
            while n>0:
                if v<=n:
                    n-=v
                    roman.append(k)
                else:
                    break
        return "".join(roman)
