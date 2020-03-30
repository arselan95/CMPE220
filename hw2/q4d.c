void* secure_copy_elements(void *ele_src[], int ele_cnt, size_t ele_size) 
{
    // Allocate buffer for ele_cnt and ele_size
    //Code to make it safe as askined in the question
    long long unsigned required_size =ele_cnt * (long long unsigned) ele_size;
    size_t request_size = (size_t) required_size;
    
    if (required_size != request_size)

    //Overflow if happen return NULL value
    return NULL;
    void *result = malloc(request_size);
    if (result == NULL)
    return NULL;

    // The rest of the code will not be implemented, copy from the slides just to finish the function
    void *next = result;
    int i;
    for (i = 0; i < ele_cnt; i++) 
    {
    memcpy(next, ele_src[i], ele_size);
    next += ele_size;
    }
    return result;
}
