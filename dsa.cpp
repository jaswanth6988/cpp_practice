////
////
////
////// dsa on c language
////
////
////
/////*#include <stdio.h>
////
////int main() {
////    int N = 5;
////    int DATA[N];
////    int ITEM = 9;
////    printf("ENTER YOUR ARRY OF ELEMENTS: ");
////    scanf("%d",&DATA[N]);
////    printf("enter your ITEM: ");
////    scanf("")
////    int K = 1;
////    int LOC = 0;
////
////    while (LOC == 0 && K <= N) {
////        if (ITEM == DATA[K - 1]) {
////            LOC = K;
////        }
////        K++;
////    }
////
////    if (LOC == 0) {
////        printf("ITEM is not in the array DATA.\n");
////    } else {
////        printf("LOC is the location of ITEM: %d\n", LOC);
////    }
////
////    return 0;
////}
////
////#include<stdio.h>
////#include<conio.h>
////int main()
////{
////    int a[10],i,n,item,flag=0,low,high,mid;
////    printf("\n  Enter the size of an array: ");
////    scanf("%d",&n);
////     
////    printf("\n  Enter the elements: ");
////    for(i=0;i<n;i++)
////    {
////        scanf("%d",&a[i]);
////    }
////    printf("\n  Enter the number to be search: ");
////    scanf("%d",&item);
////    low=0,high=n-1;
////    while(low<=high)
////    {
////        mid=(low+high)/2;
////        if(item==a[mid])
////        {
////            flag=1;
////            break;
////        }
////        else if(item<a[mid])
////        {
////            high=mid-1;
////        }
////        else
////        low=mid+1;
////    }
////    if(flag==0)
////    printf("\n  The number is not found");
////    else
////    printf("\n  The number is found and its position is: %d",mid+1);
////    getch();
////}
////
////
//////buble sorting
////
////#include<stdio.h>
////int main()
////{
////	int a[10],n,k,p,swap,i;
////	 printf("\n  Enter the size of an array: ");
////    scanf("%d",&n);
////    
////    printf("\n  Enter the elements: ");
////	for (i=0;i<n;i++)
////	{
////		scanf("%d",&a[i]);
////	}
////	for (k=1;k<=n-1;k++){
////		for(p=1;p<n-k;p++){
////			if(a[p]>a[p+1]){
////				swap = a[p];
////                a[p] = a[p + 1];
////                a[p + 1] = swap;
////			}
////		}
////	}
////printf("%d",swap);
//// return 0;
////	
////}
////
////
////
////
////// C program for insertion sort
////#include <math.h>
////#include <stdio.h>
////void insertionSort(int arr[], int n)
////{
////	int i, key, j;
////	for (i = 1; i < n; i++)
////	{
////		key = arr[i];
////		j = i - 1;
////		while (j >= 0 && arr[j] > key)
////		{
////			arr[j + 1] = arr[j];
////			j = j - 1;
////		}
////		arr[j + 1] = key;
////	}
////}
////void printArray(int arr[], int n)
////{
////	int i;
////	for (i = 0; i < n; i++)
////		printf("%d ", arr[i]);
////	printf("\n");
////}
////int main()
////{
////	int arr[] = {12, 11, 13, 5, 6};
////	int n = sizeof(arr) / sizeof(arr[0]);
////
////	insertionSort(arr, n);
////	printArray(arr, n);
////
////	return 0;
////}
////
////
////
////#include<stdio.h>
////int main()
////{
////	int a[10],n,temp,i,j;
////	printf("\n  Enter the size of an array: ");
////    scanf("%d",&n);
////    printf("\n  Enter the elements: ");
////	for (i=1;i<=n;i++)
////	{
////		scanf("%d",&a[i]);
////	}
////	for(j=2;j<=n;j++){
////		temp=a[j];
////		i=j-1;
////	    while (i > 0 && a[i] > temp)
////		{
////			a[i + 1] = a[i];
////			i--;
////		}
////		a[i + 1] = temp;
////	}
////{
////	for (int i = 1; i <= n; i++){
////		printf("%d ", a[i]);
////	}
////}
////		return 0;
////}
////
////
////
////
////#include <stdio.h>
////int main()
////{
////    int k,n,min,a[10],i,j;
////	printf("\n Enter the size of an array : ");
////	scanf("%d",&n);
////	printf("\n Enter the Elements of array : ");
////	for (i=1;i<=n;i++){
////		scanf("%d",&a[i]);
////	}
////    for(int i = 0; i < n - 1; i++) {
////        min = i;
////        for(int j = i + 1; j < n; j++) {
////            if(a[min] > a[j]) {
////                min = j;
////            }
////        }
////        if(min!= i)
////        {
////            int k = a[i];
////            a[i] = a[min];
////            a[min] =k;
////        }
////    }
////    printf("Sorted Array: ");
////    for(int i = 0; i < n; i++)  {
////        printf(" %d", a[i]);
////    }
////    return 0;
////}
////
////#include <iostream>
////using namespace std;
////
////struct node {
////    int data;
////    node* next;
////};
////
////int main() {
////    int n;
////    cout << "Enter the number of nodes: ";
////    cin >> n;
////    
////    node* head = NULL;
////    node* current = NULL;
////
////    for (int i = 0; i < n; i++) {
////        int value;
////        cin >> value;
////        node* newnode = new node;
////        newnode->data = value;
////        newnode->next = NULL;
////        
////        if (head == NULL) {
////            head = newnode;
////            current = newnode;
////        } else {
////            current->next = newnode;
////            current = newnode;
////        }
////    }
////    node* ptr = head;
////    while (ptr != NULL) {
////        cout << ptr->data << " ";
////        ptr = ptr->next;
////    }
////    ptr = head;
////    while (ptr != NULL) {
////        node* temp = ptr;
////        ptr = ptr->next;
////        delete temp;
////    }
////
////    return 0;
////}
////
////
////
////#include <iostream>
////#include <cstddef>
////using namespace std;
////
////struct node {
////    int data;
////    node* next;
////};
////int main() {
////    int n;
////    cout << "Enter the number of nodes: ";
////    cin >> n;	
////    
////    node* head = nullptr;
////    node* current = nullptr;
////
////    for (int i = 0; i < n; i++) {
////        int value;
////        cin >> value;
////        node* newnode = new node;
////        newnode->data = value;
////        newnode->next = nullptr;
////        
////        if (head == nullptr) {
////            head = newnode;
////            current = newnode;
////        } else {
////            current->next = newnode;
////            current = newnode;
////        }
////    }
////    cout << "Enter the searching element: ";
////    int search;
////    cin >> search;
////    bool found = false;
////    node* ptr = head;
////    while (ptr != nullptr) {
////        if (ptr->data == search) {
////            found = true;
////            break; 
////        }
////        ptr = ptr->next;
////    }
////
////    if (found) {
////        cout << "Search element is found" << endl;
////    } else {
////        cout << "Search element is not found" << endl;
////    }
////    ptr = head;
////    while (ptr != nullptr) {
////        node* temp = ptr;
////        ptr = ptr->next;
////        delete temp;
////    }
////
////    return 0;
////}*/
/////*
////#include <iostream>
////using namespace std;
////
////struct node {
////    int data;
////    node* next;
////    node* prev;
////};
////
////node* insert(node* head, node* value, int value2); // Function declaration
////void print(node* head); // Function declaration
////
////int main() {
////    int n;
////    cout << "Enter the number of nodes: ";
////    cin >> n;
////
////    node* head = nullptr;
////    for (int i = 0; i < n; i++) {
////        int value;
////        cin >> value;
////        node* newnode = new node;
////        newnode->data = value;
////        newnode->next = nullptr;
////        newnode->prev = nullptr;
////
////        if (head == nullptr) {
////            head = newnode;
////        } else {
////            node* current = head;
////            while (current->next) {
////                current = current->next;
////            }
////            current->next = newnode;
////            newnode->prev = current;
////        }
////
////        int existingnode, value2;
////        cin >> existingnode;
////        cin >> value2;
////        node* current = head;
////        while (current != nullptr) {
////            if (current->data == existingnode) {
////                head = insert(head, current, value2);
////                break;
////            }
////            current = current->next;
////        }
////        print(head);
////    }
////    return 0;
////}
////
////node* insert(node* head, node* value, int value2) {
////    node* newnode = new node;
////    newnode->data = value2;
////    newnode->prev = value;
////    newnode->next = value->next;
////    if (value->next) {
////        value->next->prev = newnode;
////    }
////    value->next = newnode;
////    return head;
////}
////
////void print(node* head) {
////    node* ptr = head;
////    while (ptr != nullptr) {
////        cout << ptr->data << " ";
////        ptr = ptr->next;
////    }
////    cout << endl;
////}*/
/////*
////#include <iostream>
////#include <cstddef>
////using namespace std;
////
////struct node {
////    int data;
////    node* next;
////};
////int main() {
////    int n;
////    cout << "Enter the number of nodes: ";
////    cin >> n;
////    
////    node* head = nullptr;
////    for (int i = 0; i < n; i++) {
////        int value;
////        cin >> value;
////        node* newnode = new node;
////        newnode->data = value;
////        
////        if (head == nullptr) {
////            head = newnode;
////        }else{
////            node*current=head;
////            while(current->next){
////                current=current->next;
////            }
////            current->next=newnode;
////            newnode->prev=current;
////        }
////        int existingnode,value2;
////        cin>>existingnode;
////        cin>value2;
////        node* current = head;
////        while(current!=nullptr){
////            if(current->data==existingnode){
////                head=insert(head,current,value2);
////                break;
////            }
////            current=current->next;
////        }
////        print(head);
////    }
////    node*insert(node*head,node*value,int value2){
////        node*newnode=newvalue=newnode;
////        newnode->data=value2;
////        newnode->prev=value;
////        newnode->next=prev->next;
////        if (node->next){
////            node->next->prev=newnode;
////        }
////        node->next=newnode;
////        return head;
////    }
////    void print(node*head){
////        node*ptr=head;
////        while(ptr!=nullptr){
////            cout<<ptr->data;
////            
////            ptr=ptr->next;
////        }
////    }
////    
////#include<iostream>
////#include<iomanip>
////#include<vector>
////using namespace std;
////
////const int maxsize = 20;
////int stack[maxsize];
////int top = -1;
////
////int main() {
////    int n;
////    cin >> n;
////    int i; 
////    for (i = 0; i < n; i++) {
////        int value;
////        cin >> value;
////        if (top >= maxsize - 1) { 
////            cout << "overflow" << endl;
////        } else {
////            top = top + 1; 
////            stack[top] = value;
////        }
////    }
////    for (i = top; i >= 0; i--) {
////        cout << stack[i];
////    }
////    for (i = 0; i < n; i++) { 
////        if (top < 0) {
////            cout << "Underflow" << endl;
////        } else {
////            cout << "Popped " << stack[top] << endl; 
////            top = top - 1;
////        }
////    }
////
////    return 0; 
////}
////
////#include<iostream>
////#include<vector>
////using namespace std;
////struct node{
////	int data;
////	node*next;
////};
////int main(){
////	int n;
////	cin>>n;
////	for(int i=0;i<n;i++){
////		int value;
////		cin>>value;
////		push(value);
////	}
////	while(top!=nullptr){
////		cout<<"popped element:"<<top->data;
////		pop();
////		
////	}
////}
////void push(int value){
////	node*newvalue=newnode
////	newnode->data=value;
////	newnode->next=top;
////	top->newnode;
////}
////void pop(){
////	if(top=nullptr){
////		cout<<"empty stack";
////	}else{
////		node*temp=top;
////		top=top->next;
////		delete temp;
////	}
////}
////
////#include <iostream>
////using namespace std;
////
////struct Node {
////    int data;
////    Node* next;
////};
////
////Node* top = nullptr;
////
////void push(int value) {
////    Node* newNode = new Node;
////    newNode->data = value;
////    newNode->next = top;
////    top = newNode;
////}
////
////void pop();
////
////int main() {
////    int n;
////    cin >> n;
////    for (int i = 0; i < n; i++) {
////        int value;
////        cin >> value;
////        push(value);
////    }
////    
////    while (top != nullptr) {
////        pop();
////    }
////
////    return 0;
////}
////
////void pop() {
////    if (top == nullptr) {
////        cout << "Stack is empty" << endl;
////    } else {
////        Node* temp = top;
////        top = top->next;
////        cout << "Popped element: " << temp->data << endl;
////        delete temp;
////    }
////}
////
////
////#include<iostream>
////using namespace std;
////
////	int q[20];
////	int front=0;
////	int rear=0;
////int main(){
////	ch,el;
////	d=l;
////	cout<<"Enter choise: "<<endl;
////	cin>>ch;
////	switch(ch)
////		{
////			case 1:(write"enter the element: ");
////			cin>>el;
////			insert(el);
////			break;
////			
////			case 2:del();
////			break;
////			
////			case 3: display();
////			break;
////			
////			case 4 :cout<<"front";
////			 default cout<<"wrong choise";
////		}
////	
////	while(ch!=4){
////		return 0;
////	}
////	void insert(int el){
////		if((front==1 && rear==n)||(front==rear+1)){
////			cout<<"overflow";
////			return;
////		}
////		if(front==0){
////			front==1;
////			rear==1;
////		}
////		else{
////			if(rear==n){
////				rear=1;
////			}else{
////				rear=rear+1;
////			}
////		}
////		
////	}
////	void del(){
////		if(front==0){
////			cout<<"underflow";
////		}
////		cout<<q[front];
////		if(front==rear){
////			frotn=0;
////			rear=0;
////			
////		}
////		else{
////			if(front==n)
////			front=1;
////			
////		}else{
////			front=front+1;
////		}
////	}
////	void display(){
////		int f=front;
////		int r=rear;
////	while(f<=r){
////		cout<<q[f];
////		f=f+1;
////	}
////}
////}
////#include<iostream>
////using namespace std;
////
////int q[20];
////int front = 0;
////int rear = 0;
////
////void insert(int el);
////void del();
////void display();
////
////int main() {
////    int ch, el;
////    int n = 20;
////    cout << "Enter choice: " << endl;
////    cin >> ch;
////    
////    switch (ch) {
////        case 1:
////            cout << "Enter the element: ";
////            cin >> el;
////            insert(el);
////            break;
////        case 2:
////            del();
////            break;
////        case 3:
////            display();
////            break;
////        case 4:
////            cout << "Exiting" << endl;
////            break;
////        default:
////            cout << "Wrong choice" << endl;
////            break;
////    }
////
////    return 0;
////}
////
////void insert(int el) {
////    int n = 20;
////    if ((front == 1 && rear == n) || (front == rear + 1)) {
////        cout << "Overflow" << endl;
////        return;
////    }
////    if (front == 0) {
////        front = 1;
////        rear = 1;
////    }
////    else {
////        if (rear == n) {
////            rear = 1;
////        }
////        else {
////            rear = rear + 1;
////        }
////    }
////    q[rear] = el;
////}
////
////void del() {
////    if (front == 0) {
////        cout << "Underflow" << endl;
////        return;
////    }
////    cout << q[front] << endl;
////    if (front == rear) {
////        front = 0;
////        rear = 0;
////    }
////    else {
////        if (front == 20) {
////            front = 1;
////        }
////        else {
////            front = front + 1;
////        }
////    }
////}
////
////void display() {
////    int f = front;
////    int r = rear;
////    while (f <= r) {
////        cout << q[f] << " ";
////        f = f + 1;
////    }
////    cout << endl;
////}
////
////#include<iostream>
////using namespace std;
////	struct Node{
////		int data;
////		int p;
////		Node * next;
////	}
////int main(){
////	int ch,val,p;
////	do{
////		cout<<"Enter choise";
////		cin>>ch;
////		switch(ch){
////			case 1:cin>>val;
////			cin>>p;
////			insert(val,p);
////			break;
////			case 2:del();
////			break;
////			case 3:doflag()
////			break;
////			case 4:cout<<"exit";
////			default:cout<<"Wrong choise";
////		}
////	}while(ch:=4);
////}
////void insert(int val,int p){
////	Node *newnode=node Node;
////	newnode->data=value;
////	newnode->p=p;
////	newnode->next=nullptr;
////	if(head==nullptr||p>h->p){
////		newnode->next=head;
////		head=newnode;	
////	}else{
////		node*current=head;
////	}
////	while(current!=nullptr){
////		current=current->next;
////	}
////	newnode->next=current->next;
////	current->next=newnode;
////}
////void del(){
////	Node*temp = head;
////	head=head->next;
////	deleat temp;
////}
////void display(){
////	Node *current= head;
////	while(current!=nullptr())
////	{
////		cout<<current->data;
////		current=current->next;
////	}
////}
////
////
////#include <iostream>
////using namespace std;
////
////struct node {
////    int data;
////    int p;
////    node* next;
////};
////
////node* head = nullptr;
////
////void insert(int val, int p);
////void del();
////void display();
////
////int main() {
////    int ch, val, p; 
////    do {
////        cout << "Enter choice: ";
////        cin >> ch;
////        switch (ch) {
////            case 1:
////                cin >> val >> p;
////                insert(val, p);
////                break;
////            case 2:
////                del();
////                break;
////            case 3:
////                display();
////                break;
////            case 4:
////                cout << "Exit";
////                break; 
////            default:
////                cout << "Wrong choice";
////        }
////    } while (ch != 4);
////
////    return 0; 
////}
////
////void insert(int val, int p) {
////    node* newnode = new node;
////    newnode->data = val; 
////    newnode->p = p; 
////    newnode->next = nullptr;
////    if (head == nullptr || p > head->p) {
////        newnode->next = head;
////        head = newnode; 
////    } else {
////        node* current = head;
////        while (current->next != nullptr) { 
////            current = current->next;
////        }
////        newnode->next = current->next;
////        current->next = newnode;
////    }
////}
////
////void del() {
////    if (head != nullptr) { 
////        node* temp = head;
////        head = head->next;
////        delete temp;
////    }
////}
////
////void display() {
////    node* current = head;
////    while (current != nullptr) {
////        cout << current->data << " ";
////        current = current->next;
////    }
////    cout << endl; 
////}
////
////#include <iostream>
////using namespace std;
////
////struct node {
////    int data;
////    node* left;
////    node* right;
////};
////
////node* insert(int data) {
////    node* newnode = new node;
////    newnode->data = data;
////    newnode->left = nullptr;
////    newnode->right = nullptr;
////    return newnode;
////}
////
////void preorder(node* root) {
////    if (root == nullptr)
////        return;
////   
////    cout << root->data << " ";
////    preorder(root->left);
////    preorder(root->right);
////}
////
////int main() {
////    node* root = insert(5);
////    root->left = insert(10);
////    root->right = insert(8);
////    root->left->left = insert(7);
////    root->left->right = insert(2);
////    root->right->left = insert(15);
////    root->right->right = insert(18);
////
////    cout << "Preorder traversal of tree: ";
////    preorder(root);
////   
////    return 0;
////}
////
////
////
//////sir code
////#include<iostream>
////using namespace std;
////struct node{
////	int data;
////	node*left;
////	node*right;
////};
////int main(){
////	int n,value;
////	cout<<"Enter the value of n: "<<endl;
////	cin>>n;
////	for(int i=0;i<n;i++){
////		node*root=nullptr;
////		cout<<"enter value: ";
////		cin>>value;
////		root=insert(root,data);
////		if(root->left != nullptr){
////			cout<<"left child: "<<root->left->data;
////		}else{
////			cout<<"left child: None.";
////		}
////		if(root->right!=nullptr){
////			cout<<"Rightchild: "<<root->right->data;
////		}else{
////			cout<<"Rightchild: None.";
////		}
////		insert(root);
////	}
////}
////
////node*createnode(int value){
////	node*newnode=new node;
////	newnode->data=value;
////	newnode->left=nullptr;
////	newnode->right=nullptr;
////	return newnode;
////	
////}
////node*insert(node*root,int value){
////	if(root=nullptr){
////		return createnode();
////	}
////	if(value<root->data){
////		root->left=insert(root->left,value);
////	}else{
////		left->right=insert(root->right;value);
////	}
////}
////return root;
////}
////void insert(node*root){
////	insert(root->left);
////	cout<<root->data;
////	inorder(root->right);
////}
////
////
////
//////copy code
////
////#include<iostream>
////using namespace std;
////
////struct node{
////	int data;
////	node* left;
////	node* right;
////};
////
////node* createnode(int value){
////	node* newnode=new node;
////	newnode->data=value;
////	newnode->left=NULL;
////	newnode->right=NULL;
////	return newnode;
////}
////
////node* insert(node* root, int value){
////	node* newnode = createnode(value);
////	if(root==NULL){
////		return newnode;
////	}
////	if(value<root->data){
////		root->left=insert(root->left,value);
////	}
////	else if(value>root->data){
////		root->right=insert(root->right,value);
////	}
////	return root;
////}
////
////void inorder(node* root){
////	if(root==NULL){
////		return;
////	}
////	inorder(root->left);
////	cout<<root->data<<" ";
////	inorder(root->right);
////}
////
////int main()
////{
////	int n, value;
////	cout<<"Enter n elements"<<endl;
////	cin>>n;
////	node* root=NULL;
////	for(int i=0;i<n;i++){
////		cout<<"Enter value: "<<endl;
////		cin>>value;
////		root=insert(root,value);
////	}
////
////	cout<<"Inorder traversal: ";
////	inorder(root);
////	cout<<endl;
////
////	return 0;
////}
////
////
//////typed code
////#include<iostream>
////using namespace std;
////int main(){
////	int n;
////	int a[20];
////	cout<<"Enter no of elements: ";
////	cin>>n;
////	for(int i=0;i<n;i++){
////		cin>>a[i];
////	}
////	quicksort(a,0,n-1);
////	cout<<"Sorted Array";
////	for(int i=0;i<n;i++){
////		cout<<a[i];
////	}
////}
////void quicksort(int a[],int low,int high){
////	if(low<high){
////		int p=partition(a,low,high);
////		quicksort(a,low,p-1);
////		quicksort(a,p+1,high);
////	}
////}
////int partition(int a[],int low,int high){
////	int pivot=a[low];
////	int i=(low-1);
////	for(int j=low,j<=high-1;j++){
////		if(a[j]<pivot){
////			{
////			++;
////			int temp;
////			temp=a[i];
////			a[i]=a[j];
////			a[j]=temp;
////	}
////		}
////		int temp;
////		temp=a[i+1];
////		a[i+1]=a[high];
////		a[high]=temp;
////	}
////	return (i+1);
////}
////
////
////
//////copy
////
////#include <iostream>
////using namespace std;
////
////void quicksort(int a[], int low, int high); 
////int partition(int a[], int low, int high);
////
////int main() {
////    int n;
////    int a[20];
////    cout << "Enter the number of elements: ";
////    cin >> n;
////    for (int i = 0; i < n; i++) {
////        cin >> a[i];
////    }
////    quicksort(a, 0, n - 1);
////    cout << "Sorted array: ";
////    for (int i = 0; i < n; i++) {
////        cout << a[i] << " ";
////    }
////    return 0;
////}
////
////void quicksort(int a[], int low, int high) {
////    if (low < high) {
////        int p = partition(a, low, high);
////        quicksort(a, low, p - 1);
////        quicksort(a, p + 1, high);
////    }
////}
////
////int partition(int a[], int low, int high) {
////    int pivot = a[low];
////    int i = low;
////    for (int j = low + 1; j <= high; j++) {
////        if (a[j] <= pivot) {
////            i++;
////            int temp = a[i];
////            a[i] = a[j];
////            a[j] = temp;
////        }
////    }
////    int temp = a[i];
////    a[i] = a[low];
////    a[low] = temp;
////	return i;
////}
////
////*/
//////copy code
////
////#include <iostream>
////using namespace std;
////
////void merge(int a[], int p, int q, int r);
////void mergesort(int a[], int p, int r);
////
////int main()
////{
////    int n;
////    int a[20];
////    cin >> n;
////    for (int i = 0; i < n; i++)
////    {
////        cin >> a[i];
////    }
////    mergesort(a, 0, n - 1);
////    for (int i = 0; i < n; i++)
////    {
////        cout << a[i] << " ";
////    }
////    cout << endl;
////}
////
////void merge(int a[], int p, int q, int r)
////{
////    int n1 = q - p + 1;
////    int n2 = r - q;
////
////    int L[n1], R[n2]; 
////
////    for (int i = 0; i < n1; i++)
////        L[i] = a[p + i];
////    for (int j = 0; j < n2; j++)
////        R[j] = a[q + 1 + j];
////
////    int i = 0, j = 0, k = p;
////
////    while (i < n1 && j < n2)
////    {
////        if (L[i] <= R[j])
////        {
////            a[k] = L[i];
////            i++;
////        }
////        else
////        {
////            a[k] = R[j];
////            j++;
////        }
////        k++;
////    }
////
////    while (i < n1)
////    {
////        a[k] = L[i];
////        i++;
////        k++;
////    }
////
////    while (j < n2)
////    {
////        a[k] = R[j];
////        j++;
////        k++;
////    }
////}
////
////void mergesort(int a[], int p, int r)
////{
////    if (p < r)
////    {
////        int q = (p + r) / 2;
////        mergesort(a, p, q);
////        mergesort(a, q + 1, r);
////		merge(a, p, q, r);
////	}
////}
////
////
////
////
////
////
////#include<iostream>
////using namespace std;
////void insert(int a[],int n , int value){
////	n=n+1;
////	int ptr=n-1;
////	a[ptr]=value;
////	while(ptr>0&&a[(ptr-1)/2]<a[ptr]){
////		swap(a[(ptr-1)/2],a[ptr]);
////		ptr=(ptr-1)/2;
////		
////	}
////}
////void display(int a[],int n){
////	for(int i=0;i=n;i++){
////		cout<<a[i]<<" ";
////	}
////}
////int main(){
////	
////	insert(5,7,3);
////	return 0;
////}
////
////
//
//
////INSERTION IN HEAP
//#include <iostream>
//using namespace std;
//void insert(int a[],int n,int value)
//{
//    n=n+1;
//    int ptr=n-1;
//    a[ptr]=value;
//    while(ptr>0 && a[(ptr-1)/2]<a[ptr])
//    {
//        swap(a[(ptr-1)/2],a[ptr]);
//        ptr=(ptr-1)/2;
//    }
//}
//void display(int a[],int n)
//{
//    for(int i=0;i<=n;i++)
//    {
//        cout<<a[i]<<" ";
//    }
//}
//int main()
//{
//    int a[100],n,value;
//    cout<<"Enter the number of elements in the array: ";
//    cin>>n;
//    cout<<"Enter the elements of the array: ";
//    for(int i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//    cout<<"Enter the value to be inserted: ";
//    cin>>value;
//    insert(a,n,value);
//    display(a,n);
//	return 0;
//}
//

//
//#include<iostream>
//using namespace std;
//class base{
//	public:
//		virtual void  print(){
//			cout<<"Print base class."<<endl;
//		}
//		virtual void show(){
//			cout<<"Show base class."<<endl;
//		}
//};
//class derived: public base{
//	public:
//		void print(){
//			cout<<"print derived class."<<endl;
//		}
//		void show(){
//			cout<<"show derived class."<<endl;
//		}
//};
//int main(){
//	base *bptr;
//	derived d;
//	bptr= &d;
//	bptr->print();
//	bptr->show();
//	return 0;
//}
#include<iostream>
#include<stdlib.h>
using namespace std;
int sv,weight[20][20],visit[20],visited[20],i,j,p,n,q[20],front,rear;
 void bfs()
 {
     cout <<"enter source vertex";
cin >>sv;
cout <<"Visitied vertices\n";
cout << sv;
visited[sv]=1;
p=1;
while(p<n) 
{
for(j=1;j<=n;j++)
if(weight[sv][j]!=0 && visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
q[rear=rear+1]=j;
}
sv=q[front=front+1];
cout<<sv << " ";
p++;
visit[sv]=0; visited[sv]=1;
}
}

 
int main()
{
int edges;
cin >> n;
cin >> edges;
for(p=1;p<=edges;p++)
{
    int i,j;
cin >>i>>j;
weight[i][j]=1;
}
bfs();
return 0;
}







































