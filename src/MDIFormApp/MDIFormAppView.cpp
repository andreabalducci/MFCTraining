
// MDIFormAppView.cpp : implementation of the CMDIFormAppView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MDIFormApp.h"
#endif

#include "MDIFormAppDoc.h"
#include "MDIFormAppView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMDIFormAppView

IMPLEMENT_DYNCREATE(CMDIFormAppView, CFormView)

BEGIN_MESSAGE_MAP(CMDIFormAppView, CFormView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMDIFormAppView construction/destruction

CMDIFormAppView::CMDIFormAppView()
	: CFormView(IDD_MDIFORMAPP_FORM)
{
	// TODO: add construction code here

}

CMDIFormAppView::~CMDIFormAppView()
{
}

void CMDIFormAppView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CMDIFormAppView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CMDIFormAppView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ResizeParentToFit();

}

void CMDIFormAppView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMDIFormAppView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMDIFormAppView diagnostics

#ifdef _DEBUG
void CMDIFormAppView::AssertValid() const
{
	CFormView::AssertValid();
}

void CMDIFormAppView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CMDIFormAppDoc* CMDIFormAppView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMDIFormAppDoc)));
	return (CMDIFormAppDoc*)m_pDocument;
}
#endif //_DEBUG


// CMDIFormAppView message handlers
