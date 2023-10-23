CREATE DATABASE Pathfinder
    CREATE Table Monster(
        CR int,
        Name varchar(255),
        Typ varchar(255),
        Traits varchar(255),
        Size varchar(255)
    );
    CREATE Table Player(
        Level int,
        PCname varchar(255) Primary Key,
        PlayerName varchar(255),
        Class varchar(255),
        HP int,
        AC int,
        Perception int,
        ClassProfDC int,
        Race varchar(255)
    )  ;