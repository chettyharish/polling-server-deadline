#ifndef POLL_H_
#define POLL_H_

#define MAX_POLL_PRIO		-1
#define MAX_DEADLINE 		U64_MAX

/*
 * SCHED_POLL have -2 priority making them highest priority tasks
 * (Higher than deadline tasks which have -1 priority)
 * */
static inline int poll_prio(int prio)
{
	printk(KERN_ERR " POLL FUNCTION : \t%s\n", __func__);
	printk(KERN_ERR " POLL PRIO : \t%d\n", prio);

	if (unlikely(prio == MAX_POLL_PRIO-1))
		return 1;
	return 0;
}

static inline int poll_task(struct task_struct *p)
{
	printk(KERN_ERR " POLL FUNCTION : \t%s\n", __func__);
	return poll_prio(p->prio);
}


#endif /* POLL_H_ */
