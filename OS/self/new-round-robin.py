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
       
time_quantam = 2       
li = []
li.append(Process('p1', 0, 5))
li.append(Process('p2', 1, 4))
li.append(Process('p3', 2, 2))
li.append(Process('p4', 4, 1))

for i in range(
