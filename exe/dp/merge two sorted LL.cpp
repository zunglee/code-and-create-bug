node* merge(node* n1,node* n2)
{
      node* n;
      if(!n1||!n2)
      {
      	            if(!n1)                     
      	            return n2;
      	            else 
      	            return n1;
      }
      if(n1->val < n2->val)
      {
      
                    n=n1;
                    n->next = merge(n1->next,n2);
      }
      else if(n1->val > n2->val)
      {
      
                    n=n2;
                    n->next = merge(n1,n2->next);
      }
      else
      {
      		    n=n1;
                    n->next=n2;
      		    n->next->next = merge(n1->next,n2->next);
      }
      return n;
}
