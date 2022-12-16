#!/bin/python3

class Process():
    def __init__(self, proc, arriv, brst, prior):
        self.process = proc
        self.arrival_time = arriv
        self. burst_time = brst
        self.priority = prior
li = []
for i in range(5):
    proc = input('Enter process name ')
    arriv = int(input('Enter arrival time for process '))
    brst = int(input('Enter burst time '))
    prior = int(input('enter prioirity '))
    li.append(Process(proc, arriv, brst, prior))


def willSortPrior(e):
    return e.priority,e.arrival_time,e.burst_time

li2= []
li2 =  li.sort(key=willSortPrior)
i = 0
while (i!=5):
    print( li[i].process + " " +  str(li[i].arrival_time) + " " +  str(li[i].burst_time) + " " +  str(li[i].priority))
    i = i+1

