
cipher = input("Enter your Cipher: ")
cipher = cipher.upper()

ciphers = []

for x in range (1,27):
    rotation = []
    for y in cipher:
        val = ord(y)
        if (val < 65) or (val > 90):
            rotation.append(y)
        elif val == 32:
            rotation.append(" ")
        else:
            rot_val = (((val + 90) + x) % 26) + 65 
            rotation.append(chr(rot_val))
    ciphers.append((f"rot {27-x} " + "".join(rotation)))

for x in ciphers:
    print(x)