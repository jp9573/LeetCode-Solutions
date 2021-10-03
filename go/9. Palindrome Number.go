// This is a solution for Problem No 9. Palindrom Number in leetcode
// https://leetcode.com/problems/palindrome-number/
//
// I'm solve this problem with Big-O of log(10) 

func isPalindrome(x int) bool {
	originalNumber := x

	if x < 0{
		return false
	}

	reversedNumber := x % 10
	x = x / 10  

	if x > 0{
		for x > 0{
			reversedNumber = reversedNumber * 10 + x % 10
			x = x / 10
		}
	}
	
	return reversedNumber == originalNumber
}