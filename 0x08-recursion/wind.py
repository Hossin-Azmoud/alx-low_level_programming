

def wild_cmp(s1: str, s2: str) -> bool:
    
    if len(s1) == 0 or len(s2) == 0:
        
        if len(s1) == 1:
            if s1[0] == "*":
                return True

        if len(s2) == 1:
            if s2[0] == "*":
                return True

        return False
    
    if len(s1) == 0 and len(s2) == 0:
        return True
        

    if s1[0] != s2[0]:

        if s1[0] != "*" and s2[0] != "*":
            return False

        if s1[0] == "*":
            return wild_cmp(s1, s2[1:])
        
        if s2[0] == "*":
            return wild_cmp(s1[1:], s2)

    return wild_cmp(s1[1:], s2[1:])

def main(): 

if __name__ == "__main__":
    main()
