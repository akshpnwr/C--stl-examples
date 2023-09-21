from collections import defaultdict
from typing import List

class UF:
    def __init__(self, N):
        self.parents = list(range(N))
    def union(self, child, parent):
        self.parents[self.find(child)] = self.find(parent)
    def find(self, x):
        if x != self.parents[x]:
            self.parents[x] = self.find(self.parents[x])
        return self.parents[x]

def accountsMerge(accounts: List[List[str]]) -> List[List[str]]:
    uf = UF(len(accounts))

    emailToAcc = {}

    for i, acc in enumerate(accounts):
        for email in acc[1:]:
            if email in emailToAcc:
                uf.union(i, emailToAcc[email])
            else:
                emailToAcc[email] = i


    emailGroup = defaultdict(list)

    for email, i in emailToAcc.items():
        leader = uf.find(i)
        emailGroup[leader].append(email)

    res = []
    for i, emails in emailGroup.items():
        name = accounts[i][0]
        res.append([name] + sorted(emails))

    return res


accounts = [["John","johnsmith@mail.com","john_newyork@mail.com"],["John","johnsmith@mail.com","john00@mail.com"],["Mary","mary@mail.com"],["John","johnnybravo@mail.com"]]

res = accountsMerge(accounts)

for acc in res:
    for emails in acc:
        print(emails)
    print("\n")