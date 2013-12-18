typedef struct{
        int running;
        int waiting;
        int removed;
} Status;

typedef struct p{
        char p_name[256];
        int p_time;
        Status pStatus;
        int p_priority;
        struct p *next;
} P;

typedef struct{
        P *head;
        int size;
} Queue;

Queue* createNewProcess();
int add_process(Queue *queue,P *process);
int remove_process(Queue *queue);