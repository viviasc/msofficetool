// �����Ϳ������á������ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CMailMergeFieldName ��װ��

class CMailMergeFieldName : public COleDispatchDriver
{
public:
	CMailMergeFieldName(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CMailMergeFieldName(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMailMergeFieldName(const CMailMergeFieldName& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// MailMergeFieldName ����
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_Name()
	{
		CString result;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_Index()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}

	// MailMergeFieldName ����
public:

};