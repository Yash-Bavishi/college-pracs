size_block_list = int(input("Please enter the number of blocks: "))
size_process_list = int(input("Please enter the number of process: "))

block_list = []
process_list = []

# Taking input from the user

for i in range(0,size_block_list):
   block_list.append(int(input("Please enter the size of block "))) 

for i in range(0, size_process_list):
    process_list.append(int(input("Please enter the size of the process ")))

# Operation time ---------------------- YEET ------------------------

duplicate_block_list = block_list
block_location = []

# ATTEMPT 1 
"""
for i in range(0,len(process_list)):
    if (max(duplicate_block_list) < process_list[i]):
        print("Cannot be allocated")
    else:
        print(duplicate_block_list.index(max(duplicate_block_list)))
        duplicate_block_list.index(max(duplicate_block_list)) - process_list[i]
        block_location.append(i)
"""

# ATTEMP 2

print("This is the biggest", max(duplicate_block_list))
for i in process_list:
    if (max(duplicate_block_list) < i):
        block_location.append("Do you know the pain when someone says you don't have enough space left for you ?")
    else:
        max_value = max(duplicate_block_list)
        block_location.append(duplicate_block_list.index(max(duplicate_block_list)) + 1)
        duplicate_block_list[duplicate_block_list.index(max(duplicate_block_list))] = max(duplicate_block_list) - i

print(block_location)
