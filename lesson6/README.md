# Data Structure 

### Queue FIFO (First In First Out) 

data in : enqueue
data out : dequeue

### Stack LIFO (Last In First Out)

data in : push 
data out : pop

## Linked List 

C에서 링크드리스트를 구현하기 위해서는 값과 함께 다음 노트를 가리키는 포인터를 저장한다.  (Single Linked List)

```
typedef struct
{
    int number;
    // node 안에 다시 node를 사용하기 위해선 struct을 추가해주어야 한다. 
    struct node *next; // address of the next node
}
node;
```

링크드 리스트를 사용하면 데이터를 비어있는 곳 아무곳이나 저장할 수 있고, 즉 C에서 Array에 데이터를 추가로 저장할 때 처럼 realloc 해줄 필요도 없다 그러나 매번 데이터를 저장할 때마다 다음 노드의 주소를 같이 저장해주어야 하기 때문에 메모리가 더 많이 필요하다. 또한 링크드 리스트는 인덱스를 설정할 수도 없다. 이로 인해 이진 탐색과 같은 알고리즘은 링크드 리스트 자료구조에 사용할 수 없다. 


## Binary Tree 

바이너리 트리 구조를 사용하면 이진 탐색 알고리즘을 사용할 수 있으면서 링크드 리스트 처럼 데이터를 연결할 수 있다. 그러나 완쪽과 오른쪽 주소를 전부 저장해야 하기 때문에 링크드 리스트보다 메모리르 더 사용한다. 또한 바이너리 트리에 루트가 1 이고 2, 3, 4 를 바이너리 트리에 넣으면 계속 오른쪽 노드로만 들어가기 때문에 링크드 리스트와 똑같은 구조가 된다.  

## Dictionaries

딕셔너리 구조는 key와 value를 가진다. 해쉬는 array와 index를 구하는 계산식의 결합이다.