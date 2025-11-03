bool isPalindrome(int x) {
    // Negative numbers are not palindrome
    if (x < 0)
        return false;

    // Numbers ending with 0 (except 0 itself) cannot be palindrome
    if (x != 0 && x % 10 == 0)
        return false;

    int reversed = 0;
    int original = x;

    // Reverse the number
    while (x > 0) {
        int digit = x % 10;
        // Prevent overflow (for 32-bit int)
        if (reversed > (INT_MAX - digit) / 10)
            return false;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    // Check if reversed equals the original
    return (original == reversed);
}
