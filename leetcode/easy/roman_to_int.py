def romanToInt(s):
    """
    Converts roman numbers to integer numbers
    """
    roman_symbols = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
    }
    i = 0
    result = 0
    while i < len(s):
        current_val = roman_symbols[s[i]]
        if i + 1 < len(s):
            next_val = roman_symbols[s[i + 1]]
            if current_val < next_val:
                result -= current_val
            else:
                result += current_val
        else:
            result += current_val
        i += 1
    return result