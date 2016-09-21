 %{
1 Ahmedabad
2 Kolkata
3 Delhi
4 Bangalore
5 Chennai
6 Mumbai
7 Raipur
8 Jaipur
9 Chandigarh
%}
    W = [0 2024 815 1095 1926 345 1048 857 1253;2024 0 1561 1681 1776 2087 746 1362 1546
;815 1561 0 1961 2195 1507 1276 358 238
;1095 1681 1961 0 431 898 1327 1985 2298
;1926 1776 2195 431 0 1329 1361 2019 2424
;345 2087 1507 898 1329 0 1141 1202 1637
;1048 746 1276 1227 1361 1141 0 1199 1413
;857 1362 358 1985 2019 1202 1199 0 496
;1253 1546 238 2298 2424 1637 1413 496 0
]
    DG = sparse([1 1 1 1 1 1 1 1 1;
        2 2 2 2 2 2 2 2 2;
        3 3 3 3 3 3 3 3 3;
        4 4 4 4 4 4 4 4 4;
        5 5 5 5 5 5 5 5 5;
        6 6 6 6 6 6 6 6 6;
        7 7 7 7 7 7 7 7 7;
        8 8 8 8 8 8 8 8 8;
        9 9 9 9 9 9 9 9 9], [1 2 3 4 5 6 7 8 9;
        1 2 3 4 5 6 7 8 9;
        1 2 3 4 5 6 7 8 9;
        1 2 3 4 5 6 7 8 9;
        1 2 3 4 5 6 7 8 9;
        1 2 3 4 5 6 7 8 9;
        1 2 3 4 5 6 7 8 9;
        1 2 3 4 5 6 7 8 9;
        1 2 3 4 5 6 7 8 9],W)


    %the shortest path in the graph from node 1 to node 6.


    h = view(biograph(DG,[],'ShowWeights','on'));
    
    
q=input('1Enter no of Query ');
hopdata=rand(0,0);
distdata=rand(0,0);
for i=1:q 

    s=input('source node ');
    d=input('destination node ');
%h.close();
    h = view(biograph(DG,[],'ShowWeights','on'));
%//Dijkstra    
[dist,path,pred] = graphshortestpath(DG,s,d,'Method','BFS');

hop=length(path);
hop=hop-1
hopdata=[hopdata,hop];    
distdata=[distdata,dist];    
 
set(h.Nodes(path),'Color',[1 0.8 0.2])
    edges = getedgesbynodeid(h,get(h.Nodes(path),'ID'));
    set(edges,'LineColor',[1 .5 .2])
    set(edges,'LineWidth',1.8)
end
%Finding the Shortest Path in an Undirected Graph
    %Create and view an undirected graph with 9 nodes and all  edges.

   
    
    
     
q=input('2Enter no of Query');
for i=1:q 

    s=input('source node');
    d=input('destination node');
%h.close();
    h = view(biograph(DG,[],'ShowWeights','on'));
%//Dijkstra    
[dist,path,pred] = graphshortestpath(DG,s,d,'Method','Dijkstra')

hop=length(path);
hop=hop-1
hopdata=[hopdata,hop];    
distdata=[distdata,dist];    

    set(h.Nodes(path),'Color',[1 0.4 0.4])
    edges = getedgesbynodeid(h,get(h.Nodes(path),'ID'));
    set(edges,'LineColor',[1 0 0])
    set(edges,'LineWidth',1.5)
end

    plot(distdata,'DisplayName','W','YDataSource','W');figure(gcf)
   
distdata
hopdata

    
    UG = tril(DG + DG')

q=input('3Enter no of Query');
for i=1:q 

    s=input('source node');
    d=input('destination node');

    h = view(biograph(DG,[],'ShowWeights','on'));


[dist,path,pred] = graphshortestpath(DG,s,d,'directed',false)

    
    set(h.Nodes(path),'Color',[1 0.4 0.4])
    edges = getedgesbynodeid(h,get(h.Nodes(path),'ID'));
    set(edges,'LineColor',[1 0 0])
    set(edges,'LineWidth',1.5)
end
