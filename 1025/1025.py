
info = input()

first_add, N, K = info.split(" ")
first_add = int(first_add)
N = int(N)
K = int(K)

order_add = []
order_data = {}
order_next = {}

for _ in range(N):
    line = input()
    add, data, next_add = line.split(" ")
    add = int(add)
    data = int(data)
    next_add = int(next_add)
    order_next[add] = next_add
    order_data[add] = data

the_sum = 0

while(first_add != -1):
    order_add.append(first_add)
    first_add = order_next[first_add]
    the_sum += 1

for i in range(0, (the_sum - the_sum % K), K):
    order_add[i:i + K] = order_add[i:i + K][::-1]

for i in range(the_sum - 1):
    print("{:05d} {} {:05d}".format(
        order_add[i], order_data[order_add[i]], order_add[i + 1]))
print("{:05d} {} -1".format(order_add[the_sum - 1],
                            order_data[order_add[the_sum - 1]]))
exit(0)

