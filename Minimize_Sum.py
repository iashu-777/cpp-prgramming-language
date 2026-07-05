from queue import PriorityQueue

def solve(arr, M):
    n = len(arr)
    pq = PriorityQueue(n)
    
    # creating max Heap pq
    for num in arr:
        pq.put(-num)
    
    curr_total = sum(arr)
    ans = curr_total
    for x in range(1, M):
        curr_total += n
        elm = -pq.get()
        if (elm + x)%M == 0:
            while (elm + x)%M == 0:
                curr_total -= M
                pq.put(0)
                if pq.empty():
                    break
                elm = -pq.get()
        else:
            pq.put(-elm)
        ans = min(curr_total, ans)
        if pq.empty():
            break
    return ans


    
if __name__ == "__main__":
    T = int(input()) # Test Cases
    for testcase in range(T):
        N, M = list(map(int, input().split()))
        arr = list(map(int, input().split()))
        print(solve(arr, M))