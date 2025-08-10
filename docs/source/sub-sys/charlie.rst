charlie page header
===================

charlie topic 1
---------------

OK, yet some other lines and boxes.




charlie topic 2
---------------

Other mermaid diagrams

.. mermaid::

    flowchart LR
        markdown["`This **is** _Markdown_`"]
        newLines["`Line1
        Line 2
        Line 3`"]
        markdown --> newLines

sankey

.. mermaid::

    sankey-beta
    %% source,target,value
    Electricity grid,Over generation / exports,104.453
    Electricity grid,Heating and cooling - homes,113.726
    Electricity grid,H2 conversion,27.14

xychart

.. mermaid::

    xychart-beta
    title "Sales Revenue"
    x-axis [jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec]
    y-axis "Revenue (in $)" 4000 --> 11000
    bar [5000, 6000, 7500, 8200, 9500, 10500, 11000, 10200, 9200, 8500, 7000, 6000]
    line [5000, 6000, 7500, 8200, 9500, 10500, 11000, 10200, 9200, 8500, 7000, 6000]


block 

.. mermaid::

    block-beta
    columns 3
    a:3
    block:group1:2
    columns 2
    h i j k
    end
    g
    block:group2:3
    %% columns auto (default)
    l m n o p q r
    end

architecture 

.. mermaid::

    architecture-beta
    group api(cloud)[API]

    service db(database)[Database] in api
    service disk1(disk)[Storage] in api
    service disk2(disk)[Storage] in api
    service server(server)[Server] in api

    db:L -- R:server
    disk1:T -- B:server
    disk2:T -- B:db

git gitGraph

.. mermaid::

    gitGraph
    commit id: "Normal"
    commit
    commit id: "Reverse" type: REVERSE
    commit
    commit id: "Highlight" type: HIGHLIGHT
    commit

