(ASubject)
childLockStatusListener
	: virtual void updateChildLockStatus(bool onOff);
	:

(Observer class)
dlnaChildLockListener :
miracastChildLockListener :
hdmiChildLockListener	:
	updateChildLockStatus

(Subject class)
childlockInfo class:
	private:
		childLockStatusListener *listenerBuffer[CHILD_LOCK_LISTENER_MAX];

    public:
		void addListener();
		void notify();


