int main(int argc, char** argv)
{
 int listenfd, connfd;
 int port = atoi(argv[1]);

 struct sockaddr_in clientaddr;
 int clientlen = sizeof(clientaddr);
 Signal(SIGCHLD, sigchld_handler);
 listenfd = Open_listenfd(port);
 

 while (1) {connfd = Accept(listenfd, (SA*)&clientaddr, &clientlen);
 
 if (Fork() == 0) {
 Close(listenfd); /* Child closes listening socket */
 echo(connfd); /* Child services client */
 sleep(5);
 Close(connfd); /* Child ends connection client */
 exit(0); /* Child exits */}


 Close(connfd); /* Parent closes socket */}
 
 return 0;}