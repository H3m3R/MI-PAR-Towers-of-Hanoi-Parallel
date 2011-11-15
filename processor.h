/*
 * processor.h
 *
 */

#ifndef PROCESSOR_H_
#define PROCESSOR_H_

void initParameters(int towersCount, int discsCount, int destTower);
void run(int process_id, int processors);
int process(Tower _towers[], int _size, int _discsCount, int _destTower);

#endif /* PROCESSOR_H_ */
