// created by Camilo 2021-01-31 05:13 BRT <3CamiloSasukeThomasBorregaardSoerensen
#pragma once


#include "aura/windowing/monitor.h"


namespace node_gtk
{


   class CLASS_DECL_AURA monitor :
         virtual public ::windowing::monitor
   {
   public:


      //::collection::index                                               m_iIndex;
      //::int_rectangle                                       m_rectangle;
      //::int_rectangle                                       m_rectangleWorkspace;


      monitor();
      ~monitor() override;


      ::windowing_x11::windowing * x11_windowing() const;
      ::windowing_x11::display * x11_display() const;


      void update_cache() override;


      virtual unsigned int get_monitor_color_temperature() override;
      virtual bool adjust_monitor( unsigned int dwTemperature, double dBrightness, double dwGamma) override;


      void get_monitor_rectangle(::RECTANGLE_I32 & rectangle) override;
      void get_workspace_rectangle(::RECTANGLE_I32 & rectangle) override;


      virtual ::e_status _get_monitor_rectangle();
      virtual ::e_status _get_workspace_rectangle();


   };


   //using monitor_map = iptr_map < ::pointer<monitor >>


} // namespace node_gtk



