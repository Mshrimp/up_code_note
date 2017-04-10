#!/bin/bash

INITDATAPATH=/home/xiami/note/c/count/

DESTPATH=/home/xiami/note/c/count/data

DATANAME=initdata

STYTE=.csv

DAY=31

NAMEDATE=3-

PATHNAME=$INITDATAPATH$DATANAME$NAMEDATE

cd $DESTPATH

touch name

rm $DESTPATH/* -rf

for ((day=1; day<=$DAY; day++))
do
	PATHIN=$PATHNAME$day$STYTE
	cat $PATHIN | cut -d ',' -f 1 | sort | uniq | cut -d '"' -f 2 | sort | uniq  >> name
done

while read line
do
		echo "$line"
		touch $line
done < name

for ((day=1; day<=$DAY; day++))
do
	PATHIN=$PATHNAME$day$STYTE
#	echo "$PATHIN"
	while read dataline
	do
		filename=`echo "$dataline" | cut -d ',' -f 1 | cut -d '"' -f 2`
		filedetc1=`echo "$dataline" | cut -d ',' -f 1`
		filedetc2=`echo "$dataline" | cut -d ',' -f 2`
		filedetc3=`echo "$dataline" | cut -d ',' -f 3`
		filedetc4=`echo "$dataline" | cut -d ',' -f 4`
		filedetc5=`echo "$dataline" | cut -d ',' -f 5`
		filedetc6=`echo "$dataline" | cut -d ',' -f 6`
		echo "$filename"
		if [ -z $filedetc1 ]
		then
			if [ -z $filedetc2 ]
			then
				if [ -z $filedetc3 ]
				then
					if [ -z $filedetc4 ]
					then
						if [ -z $filedetc5 ]
						then
							if [ -z $filedetc6 ]
							then
								continue
							else
								echo "$day,$dataline" >> $filenamebak
							fi
						else
							echo "$day,$dataline" >> $filenamebak
						fi
					else
						echo "$day,$dataline" >> $filenamebak
					fi
				else
					echo "$day,$dataline" >> $filenamebak
				fi
			else
				echo "$day,$dataline" >> $filenamebak
			fi
		fi
		echo "$day,$dataline"
		if [ -f $filename ]
		then
			echo "$day,$dataline" >> $filename
		fi

		filenamebak=$filename
	done < $PATHIN
done

cat name | sort | uniq >> namelist
rm name -rf
rm 菇房号 -rf

