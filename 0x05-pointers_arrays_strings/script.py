#! /bin/python3

def print_rev(s: str | None):
    if s == None:
        return
     
    print_rev(s[1:] if s[1:] else None)
    print(s[0], end='')

def rev_str(s: str):

	end   = len(s) - 1
	start = 0
	tmp   = ""
    while (start < end):
        tmp      = s[end]
        s[end]   = s[start]
        s[start] = tmp

        end -= 1
        start += 1

def main():
    s = "hell"
    rev_str(s)
    print(s)
if __name__ == "__main__":
    main()
