#include<stdio.h>
#include<stdlib.h>
struct node{

        int data;
        struct node *next;

        };
void main(){

        struct node *head = NULL;
        int n,v,p,p1,choice;
        create(&head);
        display(head);
        while(choice != 5){
            printf("\nEnter your choice: \n1.Search an element\n2.Insert an element to list\n 3.Delete an element from the list\n 4. Display the list\n 5. Terminate\nEnter : ");
            scanf("%d",&choice);
            switch(choice){
            case 1: printf("\nEnter a element to search: ");
                    scanf("%d",&n);
                    search(head,n);
                    break;
        
            case 2: printf("\nEnter the element you want to insert: ");
                    scanf("%d",&v);
                    printf("\nEnter the position to insert: ");
                    scanf("%d",&p);
                    insert(&head,v,p);
                    break;
            case 3:  printf("Enter the position you want to delete: ");
                    scanf("%d",&p1);
                    delete(&head,p1);
                    break;
            case 4: display(head);
                    break;
        
            case 5: break;    
            
        }
        }

}
void create(struct node **head){


        struct node *cur,*ptr;
        int n;
        printf("Enter the list size: ");
        scanf("%d",&n);
        printf("Enter the %d elements: ",n);
        for(int i=0;i<n;i++){
                cur = (struct node *)malloc(sizeof(struct node));
                
                scanf("%d",&cur->data);
                cur->next = NULL;
                if(*head == NULL){

                        *head = cur;
                        ptr = cur;
                }else{

                        ptr->next = cur;
                        ptr = cur;
                }
        }
       
}
void display(struct node *head){
        struct node *cur;
        printf("Lists are: ");
        for(cur = head; cur != NULL; cur = cur->next ){

                printf("%d\t",cur->data);

    }

}
void search(struct node *head,int n)
{
    
    struct node *cur;
    int count,pos = 0;
    for(cur = head; cur != NULL; cur = cur->next){
        pos++;
        if(cur->data == n){
            
            count = 0;
            
            break;
            
        }
        else{
            
            count = 1;
        }
        
    }
    if(count == 0){
        printf("Found\n");
        printf("The position is : %d\n",pos);}
    else{
        printf("Not Found\n");}
    
    
}
void insert(struct node **head, int v, int p){
    
    struct node *cur,*ptr;
    cur = (struct node *)malloc(sizeof(struct node));
    cur->data = v;
    cur->next = NULL;
    if(*head == NULL){
        
        *head = cur;
    }
    else if(p == 0){
        
        cur->next = *head;
        *head = cur;
        
    }
    else{
        ptr = *head;
        int i = 1;
        while(i<p && ptr->next != NULL){
            
            ptr = ptr->next;
            i++;
            
        }
        if(ptr->next == NULL){
            
            ptr->next = cur;
            ptr = cur;
            
        }
        else{
            
            cur->next = ptr->next;
            ptr->next = cur;
            
        }
        
    }
    printf("Inserted Successfully\n");
    
    
}
void delete(struct node **head, int p){
    
    struct node *ptr,*prev;
    int i,k;
    if( *head == NULL){
        
        
        printf("Empty: make sure that you have entered some elements\n");
        
    }
    else if(p == 1){
        
        ptr = *head;
        *head = ptr->next;
        k = ptr->data;
        free(ptr);
    }
    else {
        
        ptr = *head;
        i=1;
        while(i<p && ptr->next != NULL){
            
            prev = ptr;
            ptr = ptr->next;
            i++;
        }
        if(ptr == NULL){
            
            prev->next = NULL;
            k = ptr->data;
            free(ptr);
        }
        else{
            
            prev->next = ptr->next;
            k = ptr->data;
            free(ptr);
        }
        
    }
    printf("%d deleted successfully\n",k);
    
}
