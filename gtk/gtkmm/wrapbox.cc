// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/wrapbox.h>
#include <gtkmm/private/wrapbox_p.h>

// -*- c++ -*-
/* $Id: wrapbox.ccg,v 1.6 2004/03/03 18:48:04 murrayc Exp $ */

/*
 *
 * Copyright 2010 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glib.h>
#include <gtk/gtk.h>

namespace Gtk
{

void WrapBox::append_child(Widget& widget, WrapBoxPacking packing)
{
  insert_child(widget, -1 /* see the C documentation */, packing);
}

} // namespace Gtk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::WrapAllocationMode>::value_type()
{
  return gtk_wrap_allocation_mode_get_type();
}

// static
GType Glib::Value<Gtk::WrapBoxSpreading>::value_type()
{
  return gtk_wrap_box_spreading_get_type();
}

// static
GType Glib::Value<Gtk::WrapBoxPacking>::value_type()
{
  return gtk_wrap_box_packing_get_type();
}


namespace Glib
{

Gtk::WrapBox* wrap(GtkWrapBox* object, bool take_copy)
{
  return dynamic_cast<Gtk::WrapBox *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& WrapBox_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &WrapBox_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_wrap_box_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Orientable::add_interface(get_type());

  }

  return *this;
}


void WrapBox_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* WrapBox_Class::wrap_new(GObject* o)
{
  return manage(new WrapBox((GtkWrapBox*)(o)));

}


/* The implementation: */

WrapBox::WrapBox(const Glib::ConstructParams& construct_params)
:
  Gtk::Container(construct_params)
{
  }

WrapBox::WrapBox(GtkWrapBox* castitem)
:
  Gtk::Container((GtkContainer*)(castitem))
{
  }

WrapBox::~WrapBox()
{
  destroy_();
}

WrapBox::CppClassType WrapBox::wrapbox_class_; // initialize static member

GType WrapBox::get_type()
{
  return wrapbox_class_.init().get_type();
}


GType WrapBox::get_base_type()
{
  return gtk_wrap_box_get_type();
}


WrapBox::WrapBox(WrapAllocationMode mode, WrapBoxSpreading horizontal_spreading, WrapBoxSpreading vertical_spreading, guint horizontal_spacing, guint vertical_spacing)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Container(Glib::ConstructParams(wrapbox_class_.init(), "mode", ((GtkWrapAllocationMode)(mode)), "horizontal_spreading", ((GtkWrapBoxSpreading)(horizontal_spreading)), "vertical_spreading", ((GtkWrapBoxSpreading)(vertical_spreading)), "horizontal_spacing", horizontal_spacing, "vertical_spacing", vertical_spacing, static_cast<char*>(0)))
{
  

}

void WrapBox::set_allocation_mode(WrapAllocationMode mode)
{
gtk_wrap_box_set_allocation_mode(gobj(), ((GtkWrapAllocationMode)(mode))); 
}

WrapAllocationMode WrapBox::get_allocation_mode() const
{
  return ((WrapAllocationMode)(gtk_wrap_box_get_allocation_mode(const_cast<GtkWrapBox*>(gobj()))));
}

void WrapBox::set_vertical_spreading(WrapBoxSpreading spreading)
{
gtk_wrap_box_set_vertical_spreading(gobj(), ((GtkWrapBoxSpreading)(spreading))); 
}

WrapBoxSpreading WrapBox::get_vertical_spreading() const
{
  return ((WrapBoxSpreading)(gtk_wrap_box_get_vertical_spreading(const_cast<GtkWrapBox*>(gobj()))));
}

void WrapBox::set_horizontal_spreading(WrapBoxSpreading spreading)
{
gtk_wrap_box_set_horizontal_spreading(gobj(), ((GtkWrapBoxSpreading)(spreading))); 
}

WrapBoxSpreading WrapBox::get_horizontal_spreading() const
{
  return ((WrapBoxSpreading)(gtk_wrap_box_get_horizontal_spreading(const_cast<GtkWrapBox*>(gobj()))));
}

void WrapBox::set_vertical_spacing(guint spacing)
{
gtk_wrap_box_set_vertical_spacing(gobj(), spacing); 
}

guint WrapBox::get_vertical_spacing() const
{
  return gtk_wrap_box_get_vertical_spacing(const_cast<GtkWrapBox*>(gobj()));
}

void WrapBox::set_horizontal_spacing(guint spacing)
{
gtk_wrap_box_set_horizontal_spacing(gobj(), spacing); 
}

guint WrapBox::get_horizontal_spacing() const
{
  return gtk_wrap_box_get_horizontal_spacing(const_cast<GtkWrapBox*>(gobj()));
}

void WrapBox::set_minimum_line_children(guint n_children)
{
gtk_wrap_box_set_minimum_line_children(gobj(), n_children); 
}

guint WrapBox::get_minimum_line_children() const
{
  return gtk_wrap_box_get_minimum_line_children(const_cast<GtkWrapBox*>(gobj()));
}

void WrapBox::set_natural_line_children(guint n_children)
{
gtk_wrap_box_set_natural_line_children(gobj(), n_children); 
}

guint WrapBox::get_natural_line_children() const
{
  return gtk_wrap_box_get_natural_line_children(const_cast<GtkWrapBox*>(gobj()));
}

void WrapBox::insert_child(Widget& widget, int index, WrapBoxPacking packing)
{
gtk_wrap_box_insert_child(gobj(), (widget).gobj(), index, ((GtkWrapBoxPacking)(packing))); 
}

void WrapBox::reorder_child(Widget& widget, guint index)
{
gtk_wrap_box_reorder_child(gobj(), (widget).gobj(), index); 
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<WrapAllocationMode> WrapBox::property_allocation_mode() 
{
  return Glib::PropertyProxy<WrapAllocationMode>(this, "allocation-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<WrapAllocationMode> WrapBox::property_allocation_mode() const
{
  return Glib::PropertyProxy_ReadOnly<WrapAllocationMode>(this, "allocation-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<WrapBoxSpreading> WrapBox::property_vertical_spreading() 
{
  return Glib::PropertyProxy<WrapBoxSpreading>(this, "vertical-spreading");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<WrapBoxSpreading> WrapBox::property_vertical_spreading() const
{
  return Glib::PropertyProxy_ReadOnly<WrapBoxSpreading>(this, "vertical-spreading");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<WrapBoxSpreading> WrapBox::property_horizontal_spreading() 
{
  return Glib::PropertyProxy<WrapBoxSpreading>(this, "horizontal-spreading");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<WrapBoxSpreading> WrapBox::property_horizontal_spreading() const
{
  return Glib::PropertyProxy_ReadOnly<WrapBoxSpreading>(this, "horizontal-spreading");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<guint> WrapBox::property_minimum_line_children() 
{
  return Glib::PropertyProxy<guint>(this, "minimum-line-children");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<guint> WrapBox::property_minimum_line_children() const
{
  return Glib::PropertyProxy_ReadOnly<guint>(this, "minimum-line-children");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<guint> WrapBox::property_natural_line_children() 
{
  return Glib::PropertyProxy<guint>(this, "natural-line-children");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<guint> WrapBox::property_natural_line_children() const
{
  return Glib::PropertyProxy_ReadOnly<guint>(this, "natural-line-children");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<guint> WrapBox::property_vertical_spacing() 
{
  return Glib::PropertyProxy<guint>(this, "vertical-spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<guint> WrapBox::property_vertical_spacing() const
{
  return Glib::PropertyProxy_ReadOnly<guint>(this, "vertical-spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<guint> WrapBox::property_horizontal_spacing() 
{
  return Glib::PropertyProxy<guint>(this, "horizontal-spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<guint> WrapBox::property_horizontal_spacing() const
{
  return Glib::PropertyProxy_ReadOnly<guint>(this, "horizontal-spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gtk


