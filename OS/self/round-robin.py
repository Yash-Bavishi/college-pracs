""" Comment section
if (choice == 1):
        print(choice)
        for i in range(0,10):
            for j in range(len(li)):
                if (i == li[j].arrival):
                   arrival_time.append(li[j].pname)
"""

class Process:
    def __init__(self, pname, arrival, burst):
        self.pname = pname
        self.arrival = arrival
        self.burst = burst
       
       
li = []
li.append(Process('p1', 0, 5))
li.append(Process('p2', 1, 4))
li.append(Process('p3', 2, 2))
li.append(Process('p4', 4, 1))

time_quantam = 2
arrival_time = []
burst_time = []
dupli_brst_time = []
queue = []
for i in range(len(li)):
    dupli_brst_time.append(li[i].burst)


z = 0
while True:
    choice = int(input("enter a choice : "))
    if (choice == 1):
        for i in range(len(li)):
            if (z == li[i].arrival and li[i].arrival not in queue):
                queue.append(li[i])
            for i in range(len(queue)):
                dupli_brst_time.append(li[i].burst - time_quantam)
            z = z + 1
    elif (choice == 2):
        for i in range(len(arrival_time)):
            print(queue[i])
        break
    elif (choice == 3):
        while True:
          for i in range(li):
              print('hello')
