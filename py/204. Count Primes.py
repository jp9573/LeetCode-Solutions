def countPrimes(self, n: int) -> int:
        
        if n < 3:
            return 0
        
        
        # 1. boolean Table for prime number setting all number as prime = 1
        isPrime = [1] * (n)   
        isPrime[0] = isPrime[1] = 0
        count = 0              

        m = int(n**0.5)+1
        
        for i in range(2,m):
            if isPrime[i] == 1:
                for j in range(i+i,n,i):  # next multiple
                    isPrime[j] = 0           # non prime
        
        for i in isPrime:
            if i == 1:
                count += 1
                
        return count
