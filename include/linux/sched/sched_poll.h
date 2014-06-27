/*
 * poll.h
 *
 *  Created on: 23 Jun 2014
 *      Author: chettyharish
 */

#ifndef POLL_H_
#define POLL_H_

#define MAX_POLL_PRIO		-1
#define MAX_DEADLINE 		U64_MAX

static inline int poll_prio(int prio)
{
	printk(KERN_ERR " POLL FUNCTION : \t%s\n", __func__);
	printk(KERN_ERR " POLL PRIO : \t%d\n", prio);

	return 0;
//	if (unlikely(prio < MAX_POLL_PRIO))
//		return 1;
//	return 0;
}

static inline int poll_task(struct task_struct *p)
{
	printk(KERN_ERR " POLL FUNCTION : \t%s\n", __func__);
	return poll_prio(p->prio);
}


#endif /* POLL_H_ */
