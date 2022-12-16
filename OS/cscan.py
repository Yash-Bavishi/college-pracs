sequence = [95, 180, 34, 119, 11, 123, 62] 
add_seq = []
i = 0

while True:
    if i == len(sequence):
        break
    else:
        if sequence[i] < 50:
            add_seq.append(sequence[i])
            sequence.pop(i)
            i = i
        else:
            i = i + 1

sequence.sort()

sequence.append(199)
sequence.append(0)

add_seq.sort()

for i in add_seq:
    sequence.append(i)


sequence.insert(0, 53)

sum = 0
print("=========================================")
print(" The Sequence is ", end = ' ')
for i in range(0, len(sequence)-1):
    sum = sum + abs((sequence[i+1] - sequence[i]))
    print(str(sequence[i]) + " => " + str(sequence[i+1]), end = ' ')

print("\n The total seek time is ",sum)
