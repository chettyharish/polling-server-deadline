/*
 * poll.h
 *
 *  Created on: 23 Jun 2014
 *      Author: chettyharish
 */

#ifndef POLL_H_
#define POLL_H_

#define MAX_POLL_PRIO		-1

static inline int poll_prio(int prio)
{
	if (unlikely(prio < MAX_POLL_PRIO))
		return 1;
	return 0;
}

static inline int poll_task(struct task_struct *p)
{
	return poll_prio(p->prio);
}

#endif /* _SCHED_DEADLINE_H */



#endif /* POLL_H_ */
