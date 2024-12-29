1. E-RICKSHAWs/E-TAXIs
Goutham city has 2 railway stations, which are mainly used to commute goods for industries, or for intra-city or long-distance journeys.

(1)INTER-CITY TRAVEL
Mumbai Model Mumbai city has a very popular trend of local trains, which serve millions of people every day and help them commute from their homes to workplaces, offices, educational institutions, and more.

Though Mumbai does have a metro, like other cities such as Delhi, Chennai, and Bangalore, Mumbai Local remains people's daily choice due to its cheap fares and enormous connectivity across the city.

Delhi Model There are a total of 288 metro stations under Delhi Metro, the highest in the country. This number is astonishing. Metro lines in Delhi are spread across the capital, covering almost all parts of it, which explains the number of stations.

Unlike Delhi or Mumbai, Goutham city has only 3 metro lines, which obviously do not cover the whole city like Delhi. YES, the metro in Goutham doesn't cover the entire city.

(3) INTRA-CITY TRAVEL
Goutham-Metro is designed to efficiently connect the city's key areas, including both IT parks, the railway stations, the industrial zone, the administrative hub, the airport, and the outskirts of residential areas, ensuring seamless transit to all prominent locations.

(4) INTRA-CITY TRAVEL TO THE AREAS NOT EXCLUSIVELY COVERED BY THE METRO?
E-Rickshaw/E-Taxi Goutham city has developed a Smart/Sustainable-Travel Model to make inter-city commute affordable, clean, easier, and more sustainable.

To achieve this: Goutham City promotes E-rickshaws and E-taxis on roads and encourages citizens to opt for these GREEN TAXIS.

Goutham City provides subsidies and loan facilities for the purchase of E-taxis or E-rickshaws, which also provide an opportunity for poor people to create a source of income for themselves.

Goutham municipality has restricted commercial public transport running on fossil fuels from operating on roads.

The city has invested in infrastructure to aid E-travel: a. Special E-rickshaw stands. b. Special zones near all metro stations for E-taxis/E-rickshaws. c. The government has installed charging stations at all these stands and zones.

The Goutham-Metro lines act as the skeleton, whereas the E-rickshaws and E-taxis serve as the arteries and veins of the travel model of Goutham.


//////////SUSTAINABLE DEVELOPMENT GOALS ALIGNMENTS//////////


The above identified business case study relates to the following Sustainable Development Goals (SDGs) and works towards attaining them:

SDG No. 11: Make cities inclusive, safe, resilient, and sustainable

    11.2: By 2030, provide access to safe, affordable, accessible, and sustainable transport systems for all, improving road safety, notably by expanding public transport.
    The initiative to populate Goutham's roads with electric-run public vehicles aligns with this target. The fact that these vehicles do not contribute to pollution and actively work towards maintaining and improving the environment is commendable.

    11.6: By 2030, reduce the adverse per capita environmental impact of cities, including by paying special attention to air quality and municipal and other waste management.
    The government's promotion of electric vehicles and restrictions on fuel-powered vehicles reduce the adverse effects of fossil fuel emissions, significantly improving air quality.


2. Electricity Park
The Goutham city is a city in Gujarat. Gujarat is considered to be the epicenter for industries & startups in India. Reasons behind this trend are multifold:

1- Gujarat has historically been a center for business as it has ports which aid international cargo commutes and export. These trade activities contribute to the economy of Gujarat.

2- Initiatives by state government contribute to the growth of the economy of Gujarat. Ex: SEZs: Special Economic Zones. SEZs aim to build an environment which attracts foreign as well as domestic investors to come and invest in Gujarat and set up manufacturing units and industries.

Increased industries and manufacturing units give birth to the need for increased demand for energy. Clean and uninterrupted power.

To solve this problem, Goutham city has invested in an ELECTRICITY PARK situated on a large piece of land on the outskirts of the city, with land covered with solar panels and windmills.

Fun Fact: Gujarat has the highest installed wind power capacity in the country after Tamil Nadu.

Goutham has a culture of renewable energy. This model to promote the generation and usage of green energy inspires neighboring cities/States also.

//////////SUSTAINABLE DEVELOPMENT GOALS ALIGNMENTS//////////

SDG No. 11: Make cities inclusive, safe, resilient, and sustainable.
    Reduced Carbon Emissions:
    Windmills and solar panels generate renewable energy, replacing fossil fuels and reducing greenhouse gas emissions. This helps reverse climate change and improves city's air quality.

    Affordable Energy Access:
    Renewable energy from these parks can support community electrification projects, ensuring energy access for under-preveliged populations.

    Job Creation:
    The installation, maintenance, and operation of windmills and solar panels create local jobs, boosting the economy of the city.




//////////PROBLEM STATEMENTS IDENTIFIED//////////

(1)
Since there are multiple rickshaw stands in the city which are spreaded across the city with multiple paths leading from one source to other destinations.
To save fules consumptions in the vehicles the vehicle drivers need a way to compute the shortest route they can take in order to reach their destinatiion.

Dijkstras algorithm can help them comppute the same.

Dijkstras algorithm
Dijkstra's Algorithm is used to find the shortest path from a source node to all other nodes in a graph with non-negative edge weights. It is widely used in network routing and pathfinding.

All the desired destinations can be added to the graph and dijkstras can run on the graph and shortest path can be found out.

Principles

Greedy Selection: At each step, the algorithm selects the unvisited node with the smallest known distance to process next.
Relaxation: It updates the shortest distance to neighboring nodes if a shorter path is found through the current node.

Design Teachniques

Greedy Algorithm: It makes the locally optimal choice at each step by choosing the nearest unvisited node.
Iterative Relaxation: It systematically updates the shortest paths using the relaxation principle.

Efficiency Analysis

The efficiency of Dijkstra's algorithm depends on the choice of the data structure used to maintain the dist array. An efficient approach is to use a MIN-HEAP to store the dist array. With a min-heap, the minimum distance will always be at the top, eliminating the need to traverse the array to find the minimum distance, thereby saving time.

[Code for Dijkstra's Algorithm](Codes/Dijkstras_Algorithm.cpp)


__________________________________________________________________________________________________


(2)
Government provides a subsidy on the purchase of electric vehicles. The RTO of the city needs to maintain a record of these vehicles.

Since the city is situated in Gujarat, the registration number plate pattern is like "GJ XX XXXX". There are many vehicles running on the roads, and the RTO wishes to store the details of these vehicles in a non-decreasing sorted manner based on the last four digits.

The RTO needs an efficient sorting technique that can handle a large number of records.

MERGE SORT is one such sorting technique that can efficiently perform the sorting.

MERGE SORT
Merge Sort is a divide-and-conquer algorithm used to sort an array or list. It works by dividing the array into smaller subarrays, sorting them, and then merging them back together to form the sorted array.

Principle

Divide: Split the array into two halves recursively until each subarray has one element.
Conquer: Sort the individual subarrays.
Combine: Merge the sorted subarrays to create the final sorted array.

Design Techniques
Divide and Conquer: The problem is divided into smaller subproblems, solved individually, and combined for the final solution.
Recursion: Merge Sort uses recursion to handle subproblems.

Efficiency

Merge Sort falls under the efficiency category of O(NlogN).

Below is a sample code for MERGE SORT, in which user can enter any number of elements ranging in the limit range if INT data type.


[Code for Merge Sort](Codes/Merge_sort.cpp)


Since the Operation required is Sorting, there are more sorting algorithms too, which are given below

Bubble Sort
Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. This process is repeated until the list is sorted. Larger elements "bubble up" or move to their correct positions.

Principles:

(1)Compare and swap adjacent elements.

Design Technique:
(1)Brute Force (Simple comparisons and swaps).


Efficiency 
Bubble sort falls under O(N^2) category.

[Code for Bubble Sort](Codes/Bubble_sort.cpp)


Selection Sort
Selection Sort repeatedly selects the smallest element from the unsorted portion and moves it to the sorted portion of the list.

Principles:

(1)Find the minimum element in the unsorted part.
(2)Place it at the start of the unsorted section.

Design Technique:
Greedy (Always pick the smallest/largest element).

Efficiency 
Selection sort falls under O(N^2) category.

[Code for Selection Sort](Codes/selection_sort.cpp)



Insertion Sort
Insertion Sort builds the sorted list one element at a time by inserting each new element into its correct position within the already sorted portion.

Principles:

(1)Pick an element from the unsorted part.
(2)Place it in its correct position in the sorted part.

Design Technique:
(1)Incremental Approach (Sort step by step, building on the previous state).

Efficiency 
Insertion sort falls under O(N^2) category.


[Code for Insertion Sort](Codes/Insertion_sort.cpp)



Quick Sort

Quick Sort divides the list into two parts (around a "pivot"), with smaller elements on one side and larger elements on the other. It then recursively sorts these parts.

Principles:

(1)Choose a pivot.
(2)Partition the array into two sections: one with elements smaller than the pivot and one with elements larger.
(3)Recursively sort the partitions.

Design Technique:
(1)Divide and Conquer (Break down the problem into smaller subproblems).

Efficiency
Quick sort falls under O(Nlog(N)) category.


[Code for Quick Sort](Codes/quick_sort.cpp)


__________________________________________________________________________________________________


(3)
Municipality has built infrastructure to support the increasing trend of electric rickshaws. The city has established multiple charging stations near rickshaw hubs and close to bus and train stations to ensure that rickshaw drivers can easily access charging points, preventing any scarcity of stations.

These stations are spread across the city, and the municipality plans to remove the old electric connections from the local transformers and establish new connections. This time, the municipality has decided that the energy will be supplied directly from the electric park to these stations.

To optimize the resource usage, the city needs a layout plan that will connect all the charging stations to the park with minimal wiring required. This plan should aim to minimize the resources, such as the amount of wiring, used to establish the connections.


In other words, what municipality requires is a minimum spanning tree which covers all the stations and electric park.
Kruskal's Algorithm is an algorithm which can produce minimum soanning tree.


KRUSKAL'S ALGORITHM
Kruskal's Algorithm is a greedy algorithm used to find the Minimum Spanning Tree (MST) of a connected, weighted graph. The MST connects all the vertices of the graph with the minimum possible total edge weight, without forming any cycles.

Principles

Greedy Approach: Kruskal's Algorithm follows a greedy approach, where the edge with the smallest weight is chosen first. It continues to add the next smallest edge to the MST, ensuring no cycles are formed.

Cycle Avoidance: To avoid cycles, the algorithm uses a data structure like Union set or Union-Find to track and merge sets of vertices that are connected by the edges.

Edge Sorting: The edges are sorted in ascending order of their weights, and the algorithm selects edges one by one, adding them to the MST as long as they do not form a cycle.


Design Techniques

Greedy Technique: At each step, the algorithm selects the smallest edge that doesn't form a cycle, ensuring that the MST is built with minimum weight.

Disjoint Set (Union-Find): This data structure helps efficiently manage and merge the components (sets of vertices) to check if adding an edge creates a cycle.


Efficiency 

Kruskal's algorithm mainly performs the union-find operation, which is a constant-time operation. Hence, the efficiency of Kruskal's algorithm boils down to the efficiency of the sorting algorithm that we use to sort the edge-weight pairs. An efficient approach can be to use algorithms like Merge Sort, Quick Sort, or Heap Sort to sort the edges.


Below is a sample for Kruskal's Algorithm which uses merge sort in which user can input any number of nodes(vertices) and any number of links(edges)

Union-find functions are also crucial part while executing Kruskal's Algorithm

[Code for UNION-FIND](Codes/Union_find.cpp)

[Code for Kruskal's Algorithm](Codes/Kruskal's_Algorithm.cpp)


Prim's Algorithm is yet another algorithm which can be used to generate Minimum spanning tree. It takes a node as source aswell.


[Code for Prim's Algorithm](Codes/Prim's_algorithm.cpp)


__________________________________________________________________________________________________


(4)
There is an electric park in the city by the "PRAKASH UDYAAN".
Where there are windmill and solar panels set-up.
Municipality needs a system to store all the data this park. This system must be able to hold and update all the data related to PRAKASH UDYAAN.



[Code for E-Park Management System](Codes/E_park_Management.cpp)



__________________________________________________________________________________________________



(5)
The municipality needs to build more charging staions near the E-Rickshaw hubs/stands.
The municipality can not just randomly set-up charging points anywhere on the map.They need a plan and they need to look into some factors to decide where to set-up the Charging points.

After great research and analysis, the municipality has coome with a unique factor called NEED-FACTOR. This need factor is much influenced by the need of a charging point in that particular area or locality. It is also influenced by the population residing near the hubs which are potential passengers. 
Municipality took all these Factors into consideration and came up with a numerical value for each location which requires the charging station. The higher this NEED-FACTOR for any location is, highr will be the priority given.

Now since there are many locations, municipality can not manually decide which location must be given the highest priority, they need a mechanism which can give a list of all locations, arranged in a manner that the location with the highest priority comes first(Location with highest NEED-FACTOR).

In another words, municipality needs a method to sort the list of all the locations in a decreasing order based on their NEED-FACTOR.


We can solve this problem by implementing HEAP data structure(OR HEAP SORT).

HEAP
A heap is a specialized binary tree-based data structure that satisfies parental dominance property:

Max-Heap: For every node, the value of the parent is greater than or equal to the values of its children.

Min-Heap: For every node, the value of the parent is less than or equal to the values of its children.

Principles
Heap Property:

In a max-heap, A[parent(i)] >= A[i] for all valid i.
In a min-heap, A[parent(i)] <= A[i] for all valid i.
Structure Property:

A heap is a complete binary tree, meaning all levels are fully filled except possibly the last, which is filled from left to right.
Indexing for Arrays (Binary Heap):

Heaps are often implemented as arrays, with these relationships:
Parent: i
Left child: 2 * i       (If indexing starts from 1)
Right child: 2 * i + 1  

Insertion:

Add the new element at the end of the array (or the last position in the tree).
Restore the heap property by heapifying the tree again.

Remove the root (largest/smallest element).
Replace the root with the last element in the array/tree.
Restore the heap property by heapifying the tree again.


[Code for Heapification](Codes/Heap/Heapification.cpp)

[Code for Heap Sort](Codes/Heap/Heap_Sort.cpp)


__________________________________________________________________________________________________



(6)
The RTO needs to maintain a separate database for all the drivers of E-rickshaws.
They need a system whiich can store name of drirver , registration number of the vehicle, age and gender

They also need a mechanism, such that they can access all the information of the driver by giving his name as input.

RTO must also be able to add new drivers.


To Store the database which must be accessible to RTO all the time, We can use files.
and to Search the drivers based on their names as input, we can use BFSS(Brute Force String Search)

Brute Force String Search Algorithm
Brute Force String Search is a basic algorithm used to find a substring (smaller string) within a larger string. It checks every possible position in the main string where the substring could match, one by one, until a match is found or all possibilities are exhausted.


Efficiency

Worst-case time complexity: O(n * m) (This happens when the pattern does not match the text or matches at the last position after many comparisons).

Best-case time complexity: O(n) (If the pattern matches early or the first comparison is successful).


[Code for Heap Sort](Codes/BFSS/BFSS.cpp)


__________________________________________________________________________________________________


(7)
Municipality provide subsidies to the people who come under BPL and want to buy E-rickshaws to create a source of income for themselves.

But minicipality has only enough funds to provide subsidy to a limited number of potential candidiates and this is decided on a first come first serve basis.

We can use QUEUE data structure to implement/maintain the list of candidiates and provide them subsidy

QUEUE
Principle : Queue data structure is a FIFO type i.e. First In First Out, that is, priority is given to the candidiate who came first.


[Code for Heap Sort](Codes/candidiate_queue.cpp)



__________________________________________________________________________________________________




(8)
The municipality, just for records, needs to keep a check of if there exits a path between any two charging stations on the city. 
Municipality has a weighted graph where vertices are the charging stations.

To compute wether a path exists between any two random charging stations can be computed using Warshall's algorithm.

Warshall Algorithm
Warshall's Algorithm is used to find the transitive closure of a directed graph.It determines whether there is a path between any two nodes in the graph. The algorithm uses a weight matrix of the graph to iteratively update and determine wether path exists between two random nodes.

Principles:
(1)Uses a dynamic programming approach.
(2)Iteratively updates the path matrix.

Efficiency
Warshall has a Cubic efficiency. O(N^3)


[Code for Warshall's Algorithm ](Codes/warshall's_algorithm.cpp)


__________________________________________________________________________________________________






















